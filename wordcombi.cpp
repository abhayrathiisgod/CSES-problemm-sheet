                                    // code by ABHAY RATHI   
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define test_case    int t; cin>>t; while(t--)
const int mxN=5e3, M= 1e9+7;

int n,dp[mxN+1],k;
string s[mxN],t;

int main()
{

    cin>>t>>k;
    /*
        ababc
        ab
        abab
        c
        cb
        ab+ab+c//1
        abab+c//2    <<2<<endl;
    */
    int n=t.size();
    dp[0]=1;

    for(int i=0; i<k; i++)
    {
        cin>>s[i];
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<k; j++)
        {
            bool ok= i>=s[j].size();

            for(int l=0; l<s[j].size()&& ok; l++)
            {
                ok&= t[i-s[j].size()+l] == s[j][l];
            }
            if(ok)
            {
                
                dp[i]=(dp[i]+ dp[i-s[j].size()]) %M;
            }
        }
    }


    cout<<dp[n];

    return 0;


}