#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll N;
        cin>>N;
        ll ar[N];
        ll maxcost=0;
        for(int i=0;i<N;i++)
        {
            cin>>ar[i];
        }
        sort(ar, ar+N);
        maxcost=ar[0]%ar[1];
        ll k=2;
        while(k<N)
        {
            maxcost=maxcost%ar[k];
            k++;
        }
        cout<<maxcost<<endl;
    }
    return 0;
}
