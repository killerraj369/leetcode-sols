class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        // O(n) Solution

        int m=mat.size();
        
        int sum=0;
        int i=0;
        int j=0;

        // First Diagonal Sum (0,0 to m-1,m-1)
        while(i!=m && j!=m)
        {
            sum+=mat[i][j];
            i++;j++;
        }

        // Second Diagonal Sum (0,m-1 to m-1,0)
        i=0;j=m-1;
        while(i!=m && j!=-1)
        {
            sum+=mat[i][j];
            i++;j--;
        }

        if(m%2!=0) sum-=mat[m/2][m/2];

        return sum; 
    }
};