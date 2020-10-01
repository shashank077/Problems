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
const int MAXN = 2e5 + 10; // CAMBIAR ESTE
const int K = 20;

// GJNM
ll n, k;
ll x[MAXN], y[MAXN];
ll max_r[MAXN];
ll max_cov[MAXN];
ll LOG[MAXN + 1];
ll st[MAXN][K + 1];



// Todos los rangos son semi-abiertos [a,b)
void precompute() {
	for (int i = 0; i < n; i++)
		st[i][0] = max_cov[i];

	for (int j = 1; j <= K; j++)
		for (int i = 0; i + (1 << j) <= n; i++)
			st[i][j] = max(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
}

ll query(int L, int R) {
	int j = LOG[R - L + 1];
	return max(st[L][j], st[R - (1 << j) + 1][j]);
}

void solve() {
	rll(n, k);
	FOR(i, 0, n) {
		rl(x[i]);
	}
	sort(x, x + n);
	FOR(i, 0, n) {
		rl(y[i]);
	}

	FOR(i, 0, n) {
		ll lo = i, hi = n - 1;
		while (lo < hi) {
			ll mid = lo + (hi - lo + 1) / 2;
			if ( x[mid] - x[i] <= k )
				lo = mid;
			else
				hi = mid - 1;
		}
		max_r[i] = lo;
		max_cov[i] = lo + 1 - i;
	}

	precompute();

	ll ans = 0;
	FOR(i, 0, n) {
		ans = max(ans, max_cov[i]);
		if ( max_r[i] + 1 < n ) {
			ans = max(ans, max_cov[i] + query(max_r[i] + 1, n-1));
		}
	}

	printf("%lld\n", ans);
}


int main() {
	int t;
	ri(t);

	LOG[1] = 0;
	for (int i = 2; i <= MAXN; i++)
		LOG[i] = LOG[i / 2] + 1;

	while (t--) {
		solve();
	}

	return 0;
}