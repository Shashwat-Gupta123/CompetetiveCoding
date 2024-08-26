#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll x){
	if(x==0) return false;
	long long cubeRoot = cbrt(x);
	return cubeRoot * cubeRoot * cubeRoot == x;
}
int main(){
	// cout<<check(510657175657)<<endl;
	int t;
	cin>>t;
	while(t--){
		ll x;
		cin>>x;
		ll u=1;
		bool flag=true;
		while(u<10000){
			ll no_check=x-u*u*u;
			if(no_check<0) break;
			if(check(no_check)){
				cout<<"YES"<<endl;
				flag=false;
				break;
			}
			u++;
		}
		if(flag) cout<<"NO"<<endl;
	}
}