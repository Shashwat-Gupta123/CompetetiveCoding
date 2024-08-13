#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	// int mx=max({a,b,c});
	int mx;
	int ans=0;
	mx=a;
	if(a==mx){
		ans=max({ans,mx*(b+c),(mx*b*c)});
	}
	mx=b;
	if(b==mx){
		ans=max({ans,((a*mx)+c),(a+(mx*c))});
	}
	mx=c;
	if(c==mx){
		ans=max({ans,(a+b)*mx,(a*b*mx)});
	}
	cout<<max({ans,a*b*c,a+b+c});


}