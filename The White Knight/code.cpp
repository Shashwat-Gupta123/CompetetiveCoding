#include <bits/stdc++.h>
using namespace std;
vector<vector<char>>arr;
int n;
vector<vector<int>>dp;
int f(int i,int j){
    if(i>=n || j>=n || i<0 || j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(arr[i][j]=='P') return dp[i][j]=1+max(max(f(i+2,j+1),f(i-2,j+1)),max(f(i-1,j+2),f(i+1,j+2)));
    else  return dp[i][j]= max(max(f(i+2,j+1),f(i-2,j+1)),max(f(i-1,j+2),f(i+1,j+2)));
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    cin>>n;
	    arr.clear();
	    arr.resize(n,vector<char>(n,'.'));
	    int I,J;
	    dp.clear();
	    dp.resize(1005,vector<int>(1005,-1));
	    for(int i=0;i<n;i++) {
	       for(int j=0;j<n;j++) {
    	        cin>>arr[i][j];
    	        if(arr[i][j]=='K') {
    	            I=i;
    	            J=j;
    	        }
	       }
	    }
	    cout<<f(I,J)<<endl;
	    
	    
	    
	}

}
