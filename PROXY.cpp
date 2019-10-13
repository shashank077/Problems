#include<bits/stdc++.h>

using namespace std;
using ll = long long;

#define For(i,n)        for(int i = 0;i < n;i++)
#define fr(i,a,b)       for(int i = a;i <= b;i++)
#define Rfor(i,n)       for(int i = n-1;i >= 0;i--)
#define endl            '\n'
#define pb              push_back
#define mp              make_pair


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    // cout<<s<<endl;
    int f = 0;
    int ans = 0;
   int p_count = (int)count(s.begin(), s.end(),'P');
   if(float(p_count)/float(n) >= 0.75)
   {
    cout<<ans<<endl;
   }
   else
   {
   for(int i =2;i<n-2;i++)
     {
      // cout<<p_count<<endl;
        if(s[i] == 'A' && (s[i-1] == 'P' || s[i-2] == 'P') && (s[i+1] == 'P' || s[i+2] == 'P'))
        {
          p_count += 1;
          ans++;
        }
        // cout<<p_count<<endl;
        if(float(p_count)/float(n) >= 0.75)
         {
            f = 1;
            // cout<<ans<<endl;
            break;
         }
     }
     f == 1?cout<<ans<<endl:cout<<-1<<endl;
   }
  }
  return 0;
}