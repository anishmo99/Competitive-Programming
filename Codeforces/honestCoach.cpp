#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <utility>
#include <algorithm>
#include <stack>
#include <queue>
#include <list>
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair

typedef vector<int> vi;
typedef pair<int, int> pi;

int honestCoach(int arr[],int n)
{
    sort(arr,arr+n);
    int result=arr[n-1]-arr[0];
    for(int i{};i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            result=min(result,arr[j]-arr[i]);
        }
    }
    return result;
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cases;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i{};i<n;i++)
            cin>>arr[i];
        cout << honestCoach(arr,n) << endl;
    }
}