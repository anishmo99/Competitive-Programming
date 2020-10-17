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

int evenArray(vi arr,int n)
{
	int odd_count{},even_count{};
	for(int i{};i<n;i++)
	{
		if(arr[i]%2==0&&i%2!=0)
			even_count++;
		else if(arr[i]%2!=0&&i%2==0)
			odd_count++;
	}
	if(even_count==odd_count)
		return odd_count;
	else
		return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cases;
	cin>>cases;
	while(cases--)
	{
		int n;
		cin>>n;
		vi arr(n);
		for(int i{};i<n;i++)
			cin>>arr[i];

		cout<<evenArray(arr,n)<<endl;
	}

	return 0;
}