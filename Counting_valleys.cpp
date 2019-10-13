#include<bits/stdc++.h>
using namespace std;

static int counting_valleys(int n, string s)
{
    int sum = 0;
    int count = 0;
    for(int i=0;i<n;i++){
    if(s[i]=='U'){
      if(++sum==0)
        count++;
    }
    else sum--;
  }
  return count;
}


int main()
{

    // freopen("input.txt" , "r" ,stdin);
    int n;
    cin >> n;

    string s;
    cin >> s;

    int result = counting_valleys(n , s);

    cout << result;


}
