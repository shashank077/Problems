#include <iostream>
#include <bits/algorithmfwd.h>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll T;
    cin>>T;
    while(T!=0)
    {
        ll N=0,K=0;
        cin>>N>>K;
        vector<long long int> v;
         vector<long long int> s;
        for(int i=0;i<N;i++)
        {ll input=0;
            cin>>input;
            v.push_back(input);
        }
        ll p=0;
        p=N%K;
        ll sum=0;
        if(N%K!=0)
        {
        for(int i=0;i<N-p;i++)
        {
            sum=sum+v[i];
        }
        if(p+1<K)
        {
            sum=sum+v[N-p];
        }
        if(p+1>=K)
           {
            while(p!=0)
        {
            sum=sum+v[N-p];
            p--;
            if(p+1<K&&p!=0)
            {
                cout<<sum<<" "<<v[N-p]<<endl;
                break;
            }
            if(p+1<K&&p==0)
            {
                cout<<sum<<endl;
                break;
            }
        }
           }
        }
           else
           {
               for(int i=0;i<N;i++)
               {
                   sum=sum+v[i];
               }
               cout<<sum<<endl;
           }
        T--;
    }
}



