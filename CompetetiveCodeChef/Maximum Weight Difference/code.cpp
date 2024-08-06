#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int temp=min(n-k,k);
	    int son=0;
	    int father=0;
	    for(int i=0;i<n;i++){
	        if(temp>0){
	            son+=arr[i];
	            temp--;
	        }
	        else{
	            father+=arr[i];
	        }
	        
	    }
	    cout<<father-son<<endl;
	}

}
