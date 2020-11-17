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

ll get_sum(ll x) {
	ll ret = 0;
	while (x > 0) {
		ret += (x % 10);
		x /= 10;
	}
	return ret;
}

void solve() {
	ll n, s; rll(n, s);

	ll moves = 0;
	ll ind = 0;
	while (get_sum(n) > s) {
		ll aux_n = n;
		ll div = 1;
		FOR(i, 0, ind) {
			div *= 10ll;
		}

		aux_n = aux_n / div;
		aux_n = aux_n % 10;
		moves += (10 - aux_n) * div;
		n += (10 - aux_n) * div;
		ind++;
	}
	printf("%lld\n", moves);
}


int main() {
	int t;
	ri(t);
	while (t--) {
		solve();
	}

	return 0;
}