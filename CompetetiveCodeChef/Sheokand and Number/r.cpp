#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll Lower_Bound(ll x){
	ll lo=0;
	ll hi=x;
	ll ans=0;
	while(lo<=hi){
		ll mid=lo+(hi-lo)/2;
		ll r = pow(2,mid);
		if(r>x) hi=mid-1;
		else{
			ans=mid;
			lo=mid+1;
		}
	}
	return ans;

}
ll Upper_Bound(ll x){
	ll lo=0;
	ll hi=x;
	ll ans=0;
	while(lo<=hi){
		ll mid=lo+(hi-lo)/2;
		ll r = pow(2,mid);
		if(r>x){
			ans=mid;
			hi=mid-1;
		}
		else{
			// ans=mid;
			lo=mid+1;
		}
	}
	return ans;

}
int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n;  // 10
		cin>>n;
		ll l_b=Lower_Bound(n); // 3
		ll  u_b =Upper_Bound(n);  // 4
		ll No1;
		ll No2;
		int temp1=pow(2,u_b); //16-10  -->6
		int temp2=pow(2,l_b);  // 10-8   __>2
		cout<<min(abs(temp1-n),abs(n-temp2))<<endl;
// 		if(temp1<temp2){
// 			No1=pow(2,u_b);
// 			No2=1;
			
// 		}
// 		else{
// 			No1=pow(2,l_b);   // 8
// 			No2=n-No1;     //   2
// 			ll l_b2=Lower_Bound(No2);  // 0
// 			ll  u_b2 =Upper_Bound(No2);   // 2
// 			int temp12=pow(2,u_b2)-No2; //4-2  -->2
// 			int temp22=No2-pow(2,l_b2);  // 2-1   __>1
// 			if(temp12<temp22){
// 				No2=pow(2,u_b2);
			
// 			}
// 			else{
// 				No2=pow(2,l_b2);   //  2
// 			}

// 		}
// 		cout<<"NO1-->"<<No1<<endl;
// 		cout<<"No2-->"<<No2<<endl;
// 		cout<<n;
// 		cout<<abs(n-(No1+No2))<<endl;  // 10-2-8
		

	}

}
