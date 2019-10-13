#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstring>
#include <set>
#include <map>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pair<int,int>> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

#define ri(a) scanf("%d", &a);
#define rii(a,b) scanf("%d %d", &a, &b);
#define riii(a,b,c) scanf("%d %d %d", &a, &b, &c);
#define rl(a) scanf("%lld", &a);
#define rll(a,b) scanf("%lld %lld", &a, &b);

const int INF = 0x3f3f3f3f;
const ll LLINF = 1e18;
const int maxN = 150005; // CAMBIAR ESTE

// GJNM
int arr[maxN];

int main()
{
	int n;
	ri(n);
	for (int i = 0; i < n; ++i)
	{
		ri(arr[i]);
	}
	sort(arr,arr+n,greater<int>());
	map<int,bool> mp;
	for (int i = 0; i < n; ++i)
	{
		if ( mp.find(arr[i]+1) == mp.end()) mp[arr[i]+1] = true;
		else if ( mp.find(arr[i]) == mp.end()) mp[arr[i]] = true;
		else if ( mp.find(arr[i]-1) == mp.end() && arr[i] != 1) mp[arr[i]-1] = true;
	}
	printf("%d\n", (int)mp.size());
	return 0;
}