  // code by ABHAY RATHI   
#include<bits/stdc++.h>
using namespace std; 
 
#define ll long long
int main()
{
    int n,mx=0;
    cin>>n;
    ll ans=0;
    for(int i=0;i<n; i++){
        int x;
        cin>>x;
        mx= max(mx,x);
        ans+=mx-x;
    }
    cout<<ans;
    return 0;
}