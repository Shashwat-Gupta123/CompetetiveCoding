#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<ll>arr1;
	vector<ll>arr2;
	for(int i=0;i<n;i++){
		ll temp;
		cin>>temp;
		arr1.push_back(temp);
		arr2.push_back(temp);
		if(i>=1) arr1[i]=arr1[i]+arr1[i-1];
	}
	sort(arr2.begin(),arr2.end());
	for(int i=1;i<n;i++){
		arr2[i]=arr2[i]+arr2[i-1];
	}
	// 2 3 5 5
	int m;
	cin>>m;
	while(m--){
		int type,l,r;
		cin>>type>>l>>r;
		if(type==1){
			cout<<arr1[r-1]-arr1[l-1]+(arr1[l-1]-((l-2<0)?0:arr1[l-2]))<<endl;
		}
		else{
			cout<<arr2[r-1]-arr2[l-1]+(arr2[l-1]-((l-2<0)?0:arr2[l-2]))<<endl;
		}
	}


}