#include <bits/stdc++.h>
#include<set>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    set<int>s;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        s.insert(arr[i]);
	    }
	    int ans=0;
	    int f=s.size();
	    if(n-x>=f) ans=f;
	    else  ans=n-x;
	    cout<<ans<<endl;
	    
	}

}
