#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
		if(n % 2 == 0)
		{
			cout<<"no"<<endl;
		}
		else
		{
			int f =0,k =0;
			for (int i = 0; i < n/2; ++i)
			{
				if(a[i] - a[i+1] != -1)
				{
					f=1;
					break;
				}
			}
			for (int i = n/2; i < n-1; ++i)
			{
				if(a[i] - a[i+1] != 1)
				{
					k=1;
					break;
				}
			}
			if (f==0&&k==0&&a[0] == 1 && a[n-1] == 1)
			{
				cout<<"yes"<<endl;
			}
			else
				cout<<"no"<<endl;
		}
		
	}
	return 0;
}
