#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int ans=0;
	    for(int i=1;i<=k;i++){
	        ans=max(ans,n%i);
	    }
	    cout<<ans<<endl;
	}

}
