#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	vector<int>v(n,0);
	int r=1;
	unordered_set<int>s;
	for(int i=n-1;i>=0;i--){
		if(i==n-1){
			v[i]=r;
			s.insert(arr[i]);

		}
		else if(s.find(arr[i])==s.end()){
			r++;
			v[i]=r;
			s.insert(arr[i]);
		}
		else v[i]=r;
	}
	// for(int i=0;i<n;i++) cout<<v[i]<<" ";
	while(m--){
		int temp;
		cin>>temp;
		cout<<v[temp-1]<<endl;
	}
}