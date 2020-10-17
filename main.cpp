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

typedef long long int lli;
typedef vector<int> vi;
typedef pair<int, int> pi;



int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cases;
	cin >> cases;
	int k = 1;
	while (cases--)
	{
		int n;
		cin >> n;
		vector<int> arr(n, 0);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		cout << "Case #" << k++ << ": " << recbd(arr, n) << endl;
	}
	return 0;
}
