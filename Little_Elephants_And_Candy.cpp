#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int elephant , candies , x , sum = 0;
		cin >> elephant >> candies;

		vector<int> v;

		for (int i = 0; i < elephant; ++i)
		{
			cin >> x;
			v.push_back(x);
			sum += x;
		}

		for (int i = 0; i < 1; ++i)
		{
			if (sum <= candies)
				cout << "Yes" << endl ;
			else
				cout << "No" << endl;
		}
	}
}
