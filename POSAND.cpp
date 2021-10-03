#include<bits/stdc++.h>
using namespace std;

#define endl         '\n'
#define ll 			long long

void solve(int n,int curr) {
	while(curr <= n) {
		if(log2(curr) - (int)log2(curr) == 0) {
			if(curr+1 > n) {
				break;
			}
			cout << curr + 1 << " ";
			cout << curr << " ";
			curr +=2;
		} else {
			cout << curr << " ";
			curr += 1;
		}
	}
	cout << endl; 
}

int main()
{
	// freopen("input.txt","r",stdin);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		if(n == 1) {
			cout << 1 << endl;
		}
		else if(log2(n) - (int)log2(n) == 0) {
			cout << -1 << endl;
		} else if(n == 3) {
			cout << "1 3 2" << endl;
		} else {
			cout << "2 3 1 5 4 ";
			solve(n,6);
		}
	}
	return 0;
}
