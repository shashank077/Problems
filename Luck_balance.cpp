#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,k=0;
    cin>>n>>k;
    vector<pair<int,int>>v;
    int a,b;
    int total = 0,imp = 0;
    while(n--)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        if(b == 1)
        imp++;
    }

    sort(v.begin(),v.end());


    int req = imp - k;
    int sum = 0;
    for(int i = 0;i<(int)v.size();i++)
    {
        if(v[i].second == 1 && req > 0){
            sum += v[i].first;
            req--;
        }
        else{
            total += v[i].first;
        }
    }
    cout<<total - sum;
    return 0;
}
