#include <bits/stdc++.h>
#define ll long long
using namespace std;
int check(ll x){
	int cnt=0;
	while(x!=1){
		ll var=x%2;
		if(var==1) cnt++; //2
		x=x/2;

	}
	return cnt+1;
}
int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll temp=n; //2
		int cnt1=0;
		int cnt2=0;
		while(true){
			ll x=check(n); //22
			if(x!=2){
				cnt1++;
				n++;
			}
			else{
				break;
			}
		}
		while(true){
			ll x=check(temp);
			if(x!=2){
				cnt2++;
				temp--;
			}
			else{
				break
				;
			}
		}
		cout<<min(cnt1,cnt2)<<endl;
	}
}
