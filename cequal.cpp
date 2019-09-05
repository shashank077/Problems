#include <bits/stdc++.h>
#define ll long long int
//****************
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
     ll N=0;
     cin>>N;
     ll arr[N];
     ll fr=1;
    for(ll i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+N);
    /*for(ll i=0;i<N;i++)
    {
        cout<<arr[i];
    }*/
    for(ll j=0;j<N-1;j++)
    {
        if(arr[j]==arr[j+1])
        {
           cout<<"Yes"<<endl;
            fr=0;
            break;
        }
    }
    if(fr!=0)
    {
        cout<<"No"<<endl;
    }
    }
}
