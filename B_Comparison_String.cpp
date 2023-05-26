/* Approach :- just count the max number of consecutive << or >>
and return +1. This is because whenever there are consecutive items
we want new elements and if there is discontinuity then we can use
the old elements hence getting the minimum score */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;


    while(n--)
    {
      ll n;
      cin>>n;
      string s;
      cin>>s;

      int maxCount=1;
      int prev=s[0];
      int curCount=1;
      for(int i=1;i<n;i++)
      {
        if(s[i]==prev)
        {
            curCount++;
            maxCount=max(maxCount,curCount);
        }
        else
        {
            curCount=1;
            prev=s[i];
        }
      }

       cout<<maxCount+1<<endl;


    }

    
    
    return 0;
}