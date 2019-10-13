#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s , t , a , b  , n , m;
    cin >> s>> t;
    cin >> a >> b;
    cin >> n;
    int apple[n];
    cin >> m;
    int orange[m];

    int applecount = 0 , orangecount = 0 ;

    for (int i = 0; i < n; ++i)
    {
        cin >> apple[i];

        if (a + apple[i] >= s && a + apple[i] <= t) 
        {
            applecount++;
        }
    }
    cout<<applecount<<" "<<endl;
    for (int j = 0; j < m; ++j)
    {
        cin>>orange[j];
        if (b + orange[j] >= s && b + orange[j] <= t)
        {
            orangecount++;
        }
    }
    cout<<orangecount<< " ";

}
