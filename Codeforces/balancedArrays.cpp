#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int e[n/2];
       int o[n/2];
       int x=2;
       int sum=0;
       for(int i=0;i<n/2;i++)
       {
           e[i]=x;
           x+=2;
           sum+=e[i];
       }
       int y=1;
       int s=0;
        for(int i=0;i<n/2;i++)
        {
         o[i]=y;
         y+=2;
         s+=o[i];
        }
       
         if((sum-s)%2==0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n/2;i++)
                cout<<e[i]<<" ";
            for(int i=0;i<(n/2-1);i++)
                cout<<o[i]<<" ";
                cout<<o[n/2-1]+(sum-s);
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}