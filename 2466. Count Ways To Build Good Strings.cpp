int mod = 1e9+7;

class Solution {
public:
    int solve(int low, int high, int zero ,int one, int num, unordered_map<int,int>&dp)
    {
        // Base Condition
        if(num>high) return 0;

        if(dp.count(num)!=0) return dp[num];

        // Choice Diagram
        int count=0;

        if(num>=low && num<=high) 
        {
            count=1+solve(low,high,zero,one,num+zero,dp);
            count+=solve(low,high,zero,one,num+one,dp);
        }
        else
        {
            count=solve(low,high,zero,one,num+zero,dp);
            count+=solve(low,high,zero,one,num+one,dp); 
        }
       
        return dp[num]=count%mod;
    }

    int countGoodStrings(int low, int high, int zero, int one) 
    {
        // Easy DP Question
        unordered_map<int,int> dp;
        return solve(low,high,zero,one,0,dp);

    }
};