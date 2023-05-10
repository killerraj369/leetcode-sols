class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        // Understood
        // I will make a n*n square box and then will traverse the box spirally and will place the 
        // element accrodingly

        vector<vector<int>> box(n,vector<int>(n,-1));

        int top,bottom,left,right;
        top=0;
        bottom=n-1;
        left=0;
        right=n-1;

        int dir=0;
        int num=1;

        while(top<=bottom && left<=right)
        {
            // left to right
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    box[top][i]=num;
                    num++;
                }
                top++;
            }

            // top to bottom
            else if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    box[i][right]=num;
                    num++;
                }
                right--;
            }

            // right to left
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    box[bottom][i]=num;
                    num++;
                }
                bottom--;
            }

            // bottom to top
            else if(dir==3)
            {
                for(int i=bottom;i>=top;i--)
                {
                    box[i][left]=num;
                    num++;
                }
                left++;
            }

            
            dir=(dir+1)%4;

        }

        return box;    
    }
};