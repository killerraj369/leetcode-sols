// Hadd se Halwa Question

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
       ll x,k;
       cin>>x>>k;

       if(x%k!=0)
       {
        cout<<1<<endl;
        cout<<x;
       }
       else
       {
            cout<<2<<endl;
            cout<<x-1<<" "<<1;
       }

       cout<<endl;

    }

    
    
    return 0;
}