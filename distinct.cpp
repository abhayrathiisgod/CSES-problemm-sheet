                                                // code by ABHAY RATHI   
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define test_case    int t; cin>>t; while(t--)
int main()
{
    ll n;
    cin>>n;
    set<int> mp;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        mp.insert(x);
    }   

    cout<<mp.size();

    return 0;
}