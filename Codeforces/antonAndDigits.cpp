#include <iostream>
using namespace std;

int main()
{
    int k2,k3,k5,k6,m,sum=0;
    cin>>k2>>k3>>k5>>k6;
    m=min(k2,k5);
    m=min(m,k6);
    k2=k2-m;
    sum=m*256;
    if(k2>0)
    {
        m=min(k2,k3);
        sum+=m*32;
    }
    cout<<sum<<endl;
    return 0;
}