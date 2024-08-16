#include <bits/stdc++.h>
using namespace std;
string arr;
int n,m,k;
// int dp[][][]
// W C C L L
vector<int>dp;
int f(int i,int s,int jump){
	if(jump==-1) return dp[i]=0;
	if(i==n) return dp[i]=1;
	if(dp[i]!=-1) return dp[i];
	 ans=0;
	if(jump==1){
			for(int j=1;j<=m;j++){
			if(i+j>n+1) break;
			if(i+j==n || arr[i+j]=='L'){
				ans=(ans|| f(i+j,s,1));
			}
			else if(arr[i+j]=='C') {
				ans=ans|| f(i+j,s,-1);				
			}
			else{
				ans=(ans|| f(i+j,s,0)); 
			}
			
		}
	}
	else{
		if(k==0) return dp[i]=0;
		if(s==0) return dp[i]=0;
		for(int j=1;j<=s;j++){
			if(arr[i+j]=='L' || i+j==n){
				ans=(ans|| f(i+j,s-j,1));
				break;
			}
			else if(arr[i+j]=='C'){
				ans=(ans|| f(i+j,s-j,-1));
				break;
			}
			else{
				ans=(ans|| f(i+j,s-j,0));
			}
		}
 
	}
	return dp[i]=ans;
	
 
 
 
}
int main(){
	int t;
	cin>>t;	
	while(t--){
		cin>>n>>m>>k;
		cin>>arr;
		dp.clear();
		dp.resize(n+5,-1);
		int x=f(-1,k,1);
		if(x==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}