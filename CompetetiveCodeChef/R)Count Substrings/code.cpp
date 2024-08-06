#include <bits/stdc++.h>
using namespace std;

int main() {
	// no ones se start hone wali aur end hone wali sub str--->x*(x+1)/2
    // x hot hai no of ones
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int cnt=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1') cnt++;
	    }
	    long long ans=(long long)(cnt*(long long)(cnt+1))/2;
	    cout<<ans<<endl;
	}

}
