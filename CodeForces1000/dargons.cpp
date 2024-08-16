#include<bits/stdc++.h>
using namespace std;
// bool xyz(pair<int,int>p1,pair<int,int>p2){
// 	if(p1.second<p2.second) return true;
// 	else return false;
// }
int main(){
	
	int s,n;
	cin>>s>>n;
	vector<pair<int,int>>arr;
	while(n--){
		int x,y;
		cin>>x>>y;
		pair<int,int>p;
		p.first=x;
		p.second=y;
		arr.push_back(p);
	}
	sort(arr.begin(),arr.end());
	bool f=true;
	// for(int i=0;i<arr.size();i++) cout<<arr[i].first<<" "<<arr[i].second<<endl;
	for(int i=0;i<arr.size();i++){
		if(s>arr[i].first) s+=arr[i].second;
		else f=false;
	}
	if(f==false) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;

}