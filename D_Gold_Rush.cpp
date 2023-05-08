#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(int goal , int cur, unordered_map<int,int>&dp)
{
    // Base Condition
    if(cur<goal) return false;
    if(cur==goal) return true;

    if(dp.count(cur)!=0) return dp[cur];
    // Choice Diagram
    bool ans=false;
    if(cur%3==0)
    {
        int x=cur/3;
        int y=2*x;
        ans=solve(goal,x,dp) || solve(goal,y,dp);
    } 

    return dp[cur]=ans;
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;
    
    while(t--)
    {
       ll n,m;
       cin>>n;
       cin>>m;

       unordered_map<int,int> dp;    
       if(solve(m,n,dp)) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;       
    }
    
    return 0;
}