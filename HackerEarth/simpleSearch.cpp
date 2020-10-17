#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <climits>
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
#define EB emplace_back
#define MP make_pair
#define P push

typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
            cout << i << endl;
    }

    return 0;
}