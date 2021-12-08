                                                // code by ABHAY RATHI   
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define test_case    int t; cin>>t; while(t--)
int main()
{
        ll n,m,k;

        cin>>n>>m>>k;
    
        int d_size[n];

        for(int i=0; i<n; ++i)
            cin>>d_size[i];

        int a_size[m];

        for(int i=0; i<m; ++i)
            cin>>a_size[i];

        sort(d_size,d_size+n);
        sort(a_size,a_size+m);
        int apart=0;
        
        for(int i=0,j=0; i<n; ++i)
        {
            while(j<m && a_size[j] < d_size[i]-k)
                ++j;
            if(j<m && a_size[j] <= d_size[i]+k)
                ++apart,++j;
            
        }

        cout<<apart;


        /*
        60 45 80 60
        30 60 75

        45i 60s 60i 80s
        30i 60s 75s

        45-5 =40  > 30

        ans=2;

        */
    return 0;
}