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
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair

typedef vector<int> vi;
typedef pair<int,int> pi;

int copycopy(int arr[],int n)
{
    if(n==0)    return 0;
    if(n==1)    return 1;
    sort(arr,arr+n);
    int max=arr[0],count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            count++;
        }
    }
    return count;
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
        cout << copycopy(arr,n)<<endl;
    }
    return 0;
}