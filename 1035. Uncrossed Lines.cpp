class Solution {
public:

    // APPROACH :- SAME AS EDIT DISTANCE. Suppose i am at an index i and j.
    /* 1.) They can be equal. if they are equal We have got one connecting line.
       2.) They are not equal. 
            1.) If i remains at its position, make a recursive call to find if the a[i] can
            be found in b[j-1].
            2.) if j remains at is position, make a recursie call to find if the b[j] can be
            found in a[i-1]
        return the maximum of both.
    */
    
    // here i is the current index of num1 and j is the last index of connected line
    int solve(int i,int j,vector<int>&nums1,vector<int>&nums2,vector<vector<int>>&dp)
    {   
        // Base Condition
        // If any index get out of bound Then i would not be able to make a connection
        if(j<0 || i<0) return 0;

        if(dp[i][j]!=-1) return dp[i][j];

        if(nums1[i]==nums2[j])
        {
            return dp[i][j]=1+solve(i-1,j-1,nums1,nums2,dp);
        }
        
        else
        {
            return dp[i][j]=max(solve(i,j-1,nums1,nums2,dp),solve(i-1,j,nums1,nums2,dp));
        }
    }
   

    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) 
    {
        // Obviously I will be traversing only one array and connecting with other numbers
        // in th second array

        int m=nums1.size();
        int n=nums2.size();

        vector<vector<int>> dp(m,vector<int>(n,-1));

        return solve(m-1,n-1,nums1,nums2,dp);
       
    }
};