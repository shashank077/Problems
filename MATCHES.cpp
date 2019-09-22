#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll arr[]={6,2,5,5,4,5,6,3,7,6};
    ll T;
    cin>>T;
    while(T--)
    {
        ll a=0,b=0;
        ll sum=0,res=0;
        cin>>a>>b;
        res=a+b;
        ll d=0;
        for(int i=res;i!=0;i=i/10)
            {
                d=i%10;
                sum=sum+arr[d];
                d=0;
            }
            cout<<sum<<endl;
    }
    return 0;
}
