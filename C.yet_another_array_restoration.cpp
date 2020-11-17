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

void solve() {
	vi ans;
	int mx = 1e9 + 1;
	int n, x, y; riii(n, x, y);
	FOR(i, 1, 50) {
		deque<int> pos_ans;
		pos_ans.push_front(y);
		int left = y - i, right = y + i;
		FOR(j, 1, n) {
			if ( left > 0 ) {
				pos_ans.push_front(left);
				left -= i;
			}
			else {
				pos_ans.push_back(right);
				right += i;
			}
		}
		vi pos_ans_v;
		while (!pos_ans.empty()) {
			pos_ans_v.pb(pos_ans.front());
			pos_ans.pop_front();
		}

		int found = 0;
		int nmx = -1;
		for (auto a : pos_ans_v) {
			if (a == x)
				found++;
			nmx = max(nmx, a);
		}
		if ( found == 1 && nmx < mx ) {
			mx = nmx;
			ans = pos_ans_v;
		}
	}
	for (auto a : ans) {
		printf("%d ", a);
	}
	printf("\n");
}



int main() {
	int t;
	ri(t);
	while (t--) {
		solve();
	}

	return 0;
}