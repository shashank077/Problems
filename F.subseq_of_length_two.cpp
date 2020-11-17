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
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

#define ri(a) scanf("%d", &a)
#define rii(a,b) scanf("%d %d", &a, &b)
#define riii(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define rl(a) scanf("%lld", &a)
#define rll(a,b) scanf("%lld %lld", &a, &b)
#define FOR(i,n,m) for(int i=n; i<m; i++)
#define ROF(i,n,m) for(int i=n; i>m; i--)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second

const int INF = 0x3f3f3f3f;
const ll LLINF = 1e18;
const int MAXN = 1e5; // CAMBIAR ESTE

// GJNM
int n, k;
string s, t;
ll dp[210][210][210];
bool vis[210][210][210];

ll f(int ind, int pre, int k) {
	if ( k < 0 )
		return -LLINF;
	if ( ind == n )
		return 0;
	if ( vis[ind][pre][k] )
		return dp[ind][pre][k];
	vis[ind][pre][k] = true;
	ll &ret = dp[ind][pre][k] = -LLINF;

	if (s[ind] == t[0]) {
		ret = max(ret, f(ind + 1, pre + 1, k));
	}
	else {
		ret = max(ret, f(ind + 1, pre + 1, k - 1));
	}
	if (s[ind] == t[1]) {
		ret = max(ret, f(ind + 1, pre, k) + pre);
	}
	else {
		ret = max(ret, f(ind + 1, pre, k - 1) + pre);
	}
	if ( s[ind] != t[0] && s[ind] != t[1] )
		ret = max(ret, f(ind + 1, pre, k));
	return ret;
}



int main() {
	rii(n, k);
	cin >> s >> t;
	if ( t[0] != t[1] )
		printf("%lld\n", f(0, 0, k));
	else {
		ll cnt = 0;
		for (auto c : s) {
			if (c == t[0])
				cnt++;
		}
		cnt = min(cnt + k, (ll)n);
		printf("%lld\n", cnt * (cnt - 1) / 2);
	}
	return 0;
}