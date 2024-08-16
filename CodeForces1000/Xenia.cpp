#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n,m;
	cin>>n>>m;
	ll ans=0;
	ll prev=0;
	vector<int>arr(m);
	for(int i=0;i<m;i++) cin>>arr[i];

		
	for(int i=0;i<m;i++){
		if(i==0) {
			ans+=arr[i]-1;
			prev=arr[i];
		}
		else if(arr[i]<prev){
			ans+=n-(prev-arr[i]);
			prev=arr[i];
		}
		else{
			ans+=arr[i]-prev;
			prev=arr[i];
		}
	}
	cout<<ans<<endl;
		
	
}