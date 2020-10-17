#include <iostream>
#include <string>
#include <map>
using namespace std;

void palindrome(string s)
{
	map<char,int>m;
	for(char& c:s)
	{
		m[c]++;
	}

	string first="",odd="",last="";

	for(auto c:m)
	{
		if(c.second%2!=0&&odd!="")
		{
			cout<<"NO SOLUTION";
			return;
		}
		else if(c.second%2!=0)
			odd=odd+string(c.second,c.first);
		else
		{
			first=first+string(c.second/2,c.first);
			last=string(c.second/2,c.first)+last;
		}
	}
	cout<<first+odd+last;
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin>>s;
	palindrome(s);
}