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

void solve()
{
    int n, d;
    cin >> n >> d;
    vector<int> v(n, 0);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (d == 0)
    {
        for (int i : v)
            cout << i << " ";
        return;
    }

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + (d % n));
    reverse(v.begin() + (d % n), v.end());

    for (int i : v)
        cout << i << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cases;
    cin >> cases;
    while (cases--)
    {
        solve();
        cout << endl;
    }

    return 0;
}