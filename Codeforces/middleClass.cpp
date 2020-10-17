#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        vector<int> ar;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int x;
        cin>>x;
        vector<int>rich;
        vector<int>poor;
        
        for(int i=0;i<n;i++)
        {
            if(ar[i]<x)
                poor.push_back(x-ar[i]);
            if(ar[i]>x)
                rich.push_back(ar[i]-x);
        }
        if(rich.size()==0)
            cout<<0<<endl;
        else
        {
            int sum=accumulate(rich.begin(),rich.end(),0);
            int count=0;
            int rk=0,pk=0;
            while(sum>0)
            {
                if(rich[rk]==0)
                {
                    rk++;
                    count++;
                }
                else
                {
                    sum-=poor[pk++];
                    count++;
                }   
            }
            cout<<count<<endl;
        }
    }
}