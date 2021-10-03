#include<bits/stdc++.h>
using namespace std;

#define endl         '\n'
#define ll 			long long


int main()
{
// 	freopen("input.txt","r",stdin);
	int t;
	cin >> t;
	while(t--) {
		ll n,k;
		cin >> n >> k;
		vector<ll> arr(n);
		for(int i=0;i<n;i++) {
			cin >> arr[i];
		}
		ll day = 0,carry = 0;
		for(int i=0;i<n;i++) {
			day++;
			if(arr[i]+carry < k) {
				carry = 0;
				break;
			} else {
				carry = ((arr[i]+carry) - k);
			}
		}
		if(carry == 0) {
			cout << day << endl;
		} else {
			day += (carry/k)+1;
			cout << day << endl;
		}
	}
	return 0;
}
