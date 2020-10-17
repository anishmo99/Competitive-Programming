//
// Created by Anish Mookherjee on 28/05/20.
//

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <utility>
#include <algorithm>
#include <cmath>
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define EB emplace_back

typedef vector<int> vi;
typedef pair<int,int> pi;

inline bool checkSimilar(int a,int b)
{
    return (a%2==b%2)||(abs(a-b)==1);
}

bool similarPairs(int arr[],int n)
{
    int e=0,o=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            e++;
        else
            o++;
    }
    if(o%2!=e%2)
        return false;
    else if(o%2==0)
        return true;
    else
    {
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(abs(arr[i]-arr[j])==1&&arr[i]%2!=arr[j]%2)
                    return true;
    }
    return false;
}

int main()
{
//#ifndef ONLINE_JUDGE
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
//#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(similarPairs(arr,n))
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}