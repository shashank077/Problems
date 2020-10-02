#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ve vector<int>
#define vl vector<long long int>
#define pb push_back
#define fo(i,a,n) for(i=a;i<n;i++)

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vl v(n);
        ll i;
        fo(i,0,n) cin>>v[i];
        set <ll, greater <ll> > s1;
        fo(i,0,n) {
            if(v[i]!=0)
            s1.insert(v[i]);
        }
        
        
        cout<<(s1.size())<<endl;
    }
}
