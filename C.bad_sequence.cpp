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
const int maxN = 1e5; // CAMBIAR ESTE

// GJNM
int n;
char w[200005];

int main()
{
	ri(n);
	if (n&1)
	{
		printf("NO\n");
		return 0;
	}
	scanf("%s",w);
	int leftopen = 0;
	int badright = 0;
	for (int i = 0; i < n; ++i)
	{
		if ( w[i] == ')') leftopen--;
		else leftopen++;
		if ( leftopen < 0 )
		{
			leftopen = 0;
			badright++;
		}
	}
	if ( leftopen == badright && leftopen <= 1) printf("YES\n");
	else printf("NO\n");

	return 0;
}