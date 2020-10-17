#include <iostream>
using namespace std;


long incArr(long arr[],int n)
{
	long count=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]<arr[i-1])
		{
			count+=arr[i-1]-arr[i];
			arr[i]=arr[i-1];
		}	
	}
	return count;
}

int main()
{

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    cout<<incArr(arr,n);
	
}