/* Approach :- 1..0... types of blocks are the real problem as we have
to reverse them in order to sort the string. Hence the problme reduces to
count the number of 1..0... types of blocks. Thus we should aim to reduce the
number of 1..0.. block in the string. if the string is constant we cann't do anything
but if the string has question mark then we should make its value equal to the previous
character of the string. ex 1? => 11. Mark the ? at 0 position to 0 */

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
       string s;
       cin>>s;
       if(s[0]=='?') s[0]='0';

       for(int i=0;i<s.length();i++)
       {
          if(s[i]=='?')
          {
            s[i]=s[i-1];
          }
       }

       cout<<s<<endl;

    }

    
    
    return 0;
}