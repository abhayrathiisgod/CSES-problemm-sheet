                                                // code by ABHAY RATHI   
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define test_case    int t; cin>>t; while(t--)
int main()
{
    ll n; 
    cin>>n;

    ll ans=0;
    for(int i=5; i<=n; i*=5)
    {
        ans+=n/i;
    } 
     
    cout<<ans;
    return 0;
}