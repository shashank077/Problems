#include<bits/stdc++.h>
using namespace std;

#define ll 			long long
#define For(i,n) 	for(int i = 0;i < n;i++)
#define fr(i,a,b)	for(int i = a;i <= b;i++)
#define Rfor(i,n) 	for(int i = n-1;i >= 0;i--)
#define endl         '\n'


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<ll> c(n);
		vector<ll> h(n);
		For(i,n)
		cin >> c[i];
		For(i,n)
		cin >> h[i];
		vector<ll> d(n + 1,0);
		fr(i,1,n)
		{
			// cout<<i<<" "<<c[i-1]<<" "<<i - c[i-1]<<" "<<i + c[i-1]+1<<endl;
			// cout<<n-1<<endl;
			d[max(0LL, i - c[i-1])]++;
			if(i + c[i-1] + 1 <= n)
				d[i + c[i-1]+1] += -1;

		}
		// for(auto i:d)
		// 	cout<<i<<" ";
		// cout<<endl;
		fr(i,1,(int)d.size()-1)
		{
			d[i] += d[i-1];
		}
		d.erase(d.begin());
		sort(d.begin(), d.end());
		sort(h.begin(), h.end());
		d == h ? cout<<"YES"<<endl : cout<<"NO"<<endl;

	}
	//cout<<"Done in "<<clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}
