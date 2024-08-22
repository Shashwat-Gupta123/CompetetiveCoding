#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<pair<int,int>>arr;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		pair<int,int>p;
		p.first=a;
		p.second=b;
		arr.push_back(p);
	}
	sort(arr.begin(),arr.end());
	// reverse(arr.begin(),arr.end());
	// for(int i=0;i<n;i++){
	// 	cout<<arr[i].first<<" "<<arr[i].second<<endl;
	// }
	bool f=false;
	for(int i=1;i<n;i++){
		if(arr[i].second<arr[i-1].second) {
			f=true;
			break;
		}
	}
	if(f) cout<<"Happy Alex"<<endl;
	else cout<<"Poor Alex"<<endl;
}