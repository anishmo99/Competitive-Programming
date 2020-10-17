#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str1;
    cin>>str1;
    int max_count=1,count=1;
    for(int i=1;i<str1.length();i++)
    {
        if(str1[i]==str1[i-1])
        {
            count++;
            max_count=max(max_count,count);
        }
        else
        {
            count=1;
        }
    }
    cout<<max_count;

    return 0;
}