	/*--------------------------------
		Anshul Gangwar
	Chandigarh University
--------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define ll 			long long
#define For(i,n) 	for(int i = 0;i < n;i++)
#define fr(i,a,b)	for(int i = a;i <= b;i++)
#define Rfor(i,n) 	for(int i = n-1;i >= 0;i--)
#define v 			vector<int> v

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int apple,orange,k;
		cin>>apple>>orange>>k;
		while(k)
		{
			if(apple >= orange)
			{
				orange++;
				k--;
			}
			else if(apple < orange)
			{
				apple++;
				k--;
			}
		}
		cout<<abs(apple - orange)<<endl;
	}
	return 0;
}
