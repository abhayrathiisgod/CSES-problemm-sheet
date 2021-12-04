         // code by ABHAY RATHI   
#include<bits/stdc++.h>
using namespace std; 
 
#define ll long long
int main()
{
    string s;
    cin>>s;
    char l='A';
 
    int ans=1,c=0;
 
    for(char d: s)
    {
        if(d== l)
        {
            ++c;
            ans=max(ans,c);
        }
        else
        {
            l=d;
            c=1;
        }
    }
 
 
    cout<<ans;
    return 0;
}