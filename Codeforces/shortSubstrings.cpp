string shortstr(string str)
{
	if(str.length()<=2)
		return str;
	string sol;

	set<char>set(str.begin(),str.end());

	if(set.size()==1)
		return string(str.length()/2+1,str[0]);

	stack<char> stk;
	for(char c:str)
	{
		if(stk.empty())
		{
			stk.push(c);
			// sol.PB(c);
				continue;
		}
		else if(stk.top()==c)
		{
			sol.PB(stk.top());
			stk.pop();
			// stk.push(c);
		}
		else if(stk.top()!=c)
		{
			sol.PB(stk.top());
			stk.pop();
			stk.push(c);
		}
		else
			stk.push(c);
	}
	while(!stk.empty())
	{
		sol.PB(stk.top());
		stk.pop();
	}
	return sol;
}

