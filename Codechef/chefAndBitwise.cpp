#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
	int cases;
	cin>>cases;
	while(cases--)
	{
		long long x,y,l,r;
		cin>>x>>y>>l>>r;
		if(l<0)	l=0;
		long long max=-1,func,index;
        while(r-l)
        {
			func=(x&l)|(y&l);
            if(max<func)
            {
                max=func;
                index=l;
            }
            l++;
        }
        cout<<index<<endl;
	}
	return 0;
}

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2)
{
	if(p1.first==p2.first)
		return p1.second<p2.second;
	return p1.first>p2.first;
}

int main()
{
	int cases;
	cin>>cases;
	while(cases--)
	{
		int x,y,l,r;
		cin>>x>>y>>l>>r;
		if(l<0)	l=0;
		int max=-1,func;
		vector<pair<int,int> > vecl;
		for(int i=l;i<r;i++)
		{
			func=(x&i)|(y&i);
			if(max<=func)
			{
				max=func;
				vecl.push_back(make_pair(func,i));
			}
		}
		sort(vecl.begin(),vecl.end(),comp);
		cout<<vecl[0].second<<endl;
	}
	return 0;
}

*/