#include<bits/stdc++.h>
using namespace std;

#define ll 			long long
#define For(i,n) 	for(int i = 0;i < n;i++)
#define fr(i,a,b)	for(int i = a;i <= b;i++)
#define Rfor(i,n) 	for(int i = n-1;i >= 0;i--)
#define v 			vector<int> v


int brother(string s,int k)
{
	For(i,s.length())
	{
		if(k == 0)
			break;
		else
		{
			if(s[i] >= 97 && s[i] <= 122)
			{
				s[i]-=32;
				k--;
			}
		}
	}
	int z = 0;
	For(i,s.length())
	{
		if(s[i] >= 97 && s[i] <= 122)
		{
			z = 1;
			break;
		}
	}
	if(z == 1)
		return 0;
	else
		return 1;
}

int chef(string s,int k)
{
	For(i,s.length())
	{
		if(k == 0)
			break;
		else
		{
			if(s[i] >= 65 && s[i] <= 90)
			{
				s[i]+=32;
				k--;
			}
		}
	}
	int z = 0;
	For(i,s.length())
	{
		if(s[i] >= 65 && s[i] <= 90)
		{
			z = 1;
			break;
		}
	}
	if(z == 1)
		return 0;
	else
		return 1;
}

int main()
{
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int x = chef(s,k);
		int y = brother(s,k);
		if(x == 1 && y == 0)
			cout<<"chef"<<endl;
		else if(x == 0 && y == 1)
			cout<<"brother"<<endl;
		else if(x == 1 && y == 1)
			cout<<"both"<<endl;
		else
			cout<<"none"<<endl;
	}
	return 0;
}
