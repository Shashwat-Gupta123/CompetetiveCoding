#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float u,v,a,s;
	    cin>>u>>v>>a>>s;
	    if(u<=v){
	        cout<<"Yes"<<endl;
	        continue;
	    }
	   float x = sqrt((u * u) -(2 *a* s));
	   // cout<<x<<endl;
	    if(x>v){
	        cout<<"NO"<<endl;
	        
	    }
	    else cout<<"Yes"<<endl;
	    
	    
	    
	    
	}

}
