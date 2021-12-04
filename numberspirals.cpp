												// code by ABHAY RATHI   
#include<bits/stdc++.h>
using namespace std; 
 
#define ll long long
#define test_case    int t; cin>>t; while(t--)
int main()
{
	test_case
	{
		ll x,y;
		cin>>y>>x;
		
		ll z= max(x,y);
		
		ll z2=(z-1)*(z-1),ans;
 
		if(z%2)
		{
			if((y==z))
			{
				ans=z2+x;
			}
			else
			{
				ans=z2+2*z -y;
			}
 
		}
		else
		{
			if((x==z))
			{
				ans=z2+y;
			}
			else
			{
				ans=z2+2*z -x;
			}
 
		}	
 
		cout<<ans<<"\n";
 
		
	}
 
	return 0;
}