#include<bits/stdc++.h>
using namespace std;
int no_of_ones(int x){
	if(x==0) return 0;
	int cnt=0;
	while(x>1){
		int v=x%2;
		if(v==1) cnt++;
		x=x/2;
		if(x==1) cnt++;
	}
	return cnt;
}
int main(){
	// cout<<no_of_ones(7);
	int n,m,k;
	cin>>n>>m>>k;
	int arr[m+1];
	int ans=0;
	for(int i=0;i<m+1;i++) cin>>arr[i];
	int fed=no_of_ones(arr[m]);
	for(int i=0;i<m;i++){
		int temp=no_of_ones(arr[i]^arr[m]);
		// cout<<temp<<endl;
		if(temp<=k) ans++;
		
	}
	cout<<ans<<endl;
}