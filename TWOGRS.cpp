//Correct BUT TLE SOLUTION SORRY!!
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool Sum (ll arr[], ll x, ll sum)
{
if (sum == 0)
	return true;
if (x == 0 && sum != 0)
	return false;
if (arr[x-1] > sum)
	return Sum (arr, x-1, sum);
return Sum (arr, x-1, sum) ||
		Sum (arr, x-1, sum-arr[x-1]);
}
bool Part (ll arr[], ll x)
{
	ll sum = 0;
	for (ll i = 0; i < x; i++)
	sum += arr[i];
	if (sum%2 != 0)
	return false;
	return Sum (arr, x, sum/2);
}
int main()
{
ll testcase=0;
cin>>testcase;
while(testcase--)
{ll a=0,b=0,c=0,x=1,y=2,z=3;
//ll ct=0;
cin>>a>>b>>c;
//ll u=0,v=0,w=0;
ll n=a+b+c;
ll arr[n];
for(int i=0;i<a;i++)
{
    arr[i]=x;
    cout<<arr[i];
}
for(int i=a;i<=(b+a)-1;i++)
{
    arr[i]=y;
     cout<<arr[i];
}
for(int i=b+a;i<=(c+b+a)-1;i++)
{
    arr[i]=z;
     cout<<arr[i];
}
sort(arr,arr+n);
/*for(int i=0;i<n;i++)
{
    cout<<arr[i]<<' ';
}*/

if (Part(arr, n) == true)
	cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}
return 0;
}
