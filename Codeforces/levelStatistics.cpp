//wrong on test set 2

#include <iostream>
#include <vector>

using namespace std;

bool ls(vector<int> p,vector<int> c,int n)
{
    if(n==0) return false;
    if(n==1&&p[0]>=c[0]) return true;
    if(n==1&&p[0]<c[0]) return false;
    for(int i=0;i<n-1;i++)
    {
        if(p[i]>=c[i]&&p[i]<=p[i+1]&&c[i]<=c[i+1]&&p[i+1]>=c[i+1])
            continue;
        else
            return false;
    }
    return true;
}

int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        vector<int>p(n);
        vector<int>c(n);
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
            cin>>c[i];
        }
        if(ls(p,c,n)==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
