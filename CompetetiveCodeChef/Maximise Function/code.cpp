#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    sort(arr,arr+n);
	     //long long ans=(long long)abs(x-y)+(long long)abs(y-z)+(long long)abs(z-x);
	     cout<<2*(arr[n-1]-arr[0])<<endl;
	}

}
// for all x>y>z, z>x>y, y>z>x --> ans=2*(max-min)