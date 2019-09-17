#include <iostream>
using namespace std;
#define ll long long int
int main() {
	ll T;
	cin>>T;
	while(T--)
	{
	    ll c=0,d=0,leg=0;
	    ll vl=0;
	    cin>>c>>d>>leg;
	    ll maxi=4*(c+d);
	    if(2*d>=c)
	    vl=4*d;
	    else if(2*d<c)
	     vl=4*(c-d); 
	    if(leg<vl)
	    cout<<"no"<<endl;
	    else if(leg%4!=0)
	    cout<<"no"<<endl;
	    else if(leg>=vl&&leg<=maxi&&leg%4==0)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
}
	return 0;
}
