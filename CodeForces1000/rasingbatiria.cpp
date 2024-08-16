#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n;
	cin>>n;
	int cnt=0;
	int ans=0;
	while(n>1){
		if(n%2==0) {
			cnt++;
			
		}
		else{
			ans++;
			n--;
			
		}
		n=n/2;
	}
	cout<<ans+1<<endl;
	



}