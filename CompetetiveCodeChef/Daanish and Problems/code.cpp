#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n=10;  
	    vector<int>v(10);
	    for(int i=0;i<n;i++) cin>>v[i];
	    int k;
	    cin>>k;
	    for(int i=n-1;i>=0;i--){
	        if(k>=v[i]){
	            k-=v[i];
	            v[i]=-1;
	        }
	        else{
	            v[i]=v[i]-k;
	            k=0;
	        }
	        if(k==0) break;
	    }
		
	    for(int i=v.size()-1;i>=0;i--){
	        if(v[i]!=-1 && v[i]!=0){
	            cout<<i+1<<endl;
	            break;
	        }
	    }
	}

}
