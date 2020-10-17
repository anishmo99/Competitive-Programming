#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long k=2;
        while(k)
        {
            long long sum=pow(2,k)-1;
            long long x=n/sum;
            long long y=n%sum;
            if(x>0 && y==0)
            {
                cout<<x<<endl;
                break;
                
            }
           k++; 
        }
        
    }
	return 0;
}


/*
#include <iostream>
#include <vector>
#include <cmath>
using namespace

int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        long long n;
        cin>>n;
        double double sum=0
        long long i;
        double double k;
        long long value;
        int flag=0;
        for(i=1;i<n/2;i++)
        {
            sum=0;
            k=0;
            while(sum<n)
            {
                sum+=i*pow(2,k++);
                if(sum==n)
                {
                    value=i;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        cout<<value<<endl;
    }
}

5
3
6
7
21
28
*/