                                       // code by ABHAY RATHI   
#include<bits/stdc++.h>
using namespace std; 
 
#define ll long long
#define test_case    int t; cin>>t; while(t--)
int main()
{
   
   ll n;
   cin>>n;
 
   int arr[n];
   ll total=0;
   for(int i=1; i<n; i++)
   {
       int temp;
       cin>>temp;
       total+= temp;
   }
   
   
 
   ll sum= n*(n+1)/2;
 
   cout<<sum-total<<"\n";
 
    return 0;
}