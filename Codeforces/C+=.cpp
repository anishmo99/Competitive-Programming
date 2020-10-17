long long int count1(long long int a,long long int b,long long int n)
{
	if(b>n||a>n)	return 0;
	if(b+a>n)	return 1;
		long long int max_1=max(a,b);
		long long int min_1=min(a,b);
		long long int count{};

		while(max_1<=n)
		{
			long long int temp=max_1;
			max_1+=min_1;
			min_1=temp;
			count++;
		}
		return count;
}
