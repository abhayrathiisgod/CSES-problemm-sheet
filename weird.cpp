                                                // code by ABHAY RATHI   
#include<bits/stdc++.h>
using namespace std; 
 
#define ll long long
#define test_case    int t; cin>>t; while(t--)
int main()
{
   
   ll n;
   cin>>n;
   cout<<n<<" ";
   while(n !=1)
   {
       if(n%2 ==0)
       {
           n/=2;
           cout<<n<<" ";
       }
       else
       {
           n=n*3 +1;
           cout<<n<<" ";
       }
 
   }
 
   cout<<"\n";
   
    return 0;
}