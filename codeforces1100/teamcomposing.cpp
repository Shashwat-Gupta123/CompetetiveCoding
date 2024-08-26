#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>arr(n);
		unordered_map<int,int>m;
		for(int i=0;i<n;i++) {
			cin>>arr[i];
			m[arr[i]]++;
		}
		int p,q;
		p=INT_MIN;
		q=0;
		for(auto &x:m){
			q++;
			p=max(p,x.second);

		}
		int ans=0;
		while(p>0 && q>0){
			if(p==1 && q==1) break;
			ans++;
			p--;
			q--;


		}
		cout<<ans<<endl;
	}
}