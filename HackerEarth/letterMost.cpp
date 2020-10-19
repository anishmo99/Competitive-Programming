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


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n;
	cin >> n;
	string s;
	cin >> s;

	unordered_map<char, int> ump;

	for(int i = 0; i < n; i++){
		ump[s[i]]++;
	}

	int maxc = ump[0];

	for(auto x : ump)
		maxc = max(maxc, x.S);

	cout << maxc << endl;
	return 0;
}