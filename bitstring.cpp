                                                // code by ABHAY RATHI   
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define test_case    int t; cin>>t; while(t--)
int main()
{
    ll n,s=1;
    cin>>n;

    for(int i=0; i<n; ++i)
    {
        s= 2*s%((int)1e9+7);
    }

    cout<<s<<endl;
    return 0;
}