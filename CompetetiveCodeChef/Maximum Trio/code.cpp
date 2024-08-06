#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    long long a=arr[n-1];
	    long long b=arr[n-2];
	    if(a>b){
	      cout<<(a-arr[0])*b<<endl; 
	   }
	   else{
	       cout<<(b-arr[0])*a<<endl; 
	   }
	    
	}
    
}
