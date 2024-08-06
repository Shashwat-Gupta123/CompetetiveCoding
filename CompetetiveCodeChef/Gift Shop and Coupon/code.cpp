#include <bits/stdc++.h>
using namespace std;
// not working for
/*
1
2 2
1 1


ans--> 2

*/
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n,k;
	    cin>>n>>k;
	    long long arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    if(n==1){
	        if(arr[0]<=k){
	            cout<<1<<endl;
	        }
	        else{
	            if(arr[0]%2!=0) arr[0]=(arr[0]/2)+1;
	            else arr[0]=arr[0]/2;
	            if(arr[0]>k) cout<<0<<endl;
	            else cout<<1<<endl;
	        }
	        continue;
	    }
	    sort(arr,arr+n);
	    // k= 2
        // arr=1 1
	   long long i=0;
	    long long cnt=0;
	    while(true){
	        if(k>=arr[i]){
	            long long temp=k-arr[i]; 
    	        if(arr[i+1]>temp){
    	            if(arr[i]%2!=0) arr[i]=(arr[i]/2)+1;
    	            else arr[i]=arr[i]/2;
    	            cnt++;
    	            k-=arr[i];
    	        }
    	        else{
    	            cnt++;
    	            k-=arr[i];
    	        }
    	        i++;
	        }
	        else break;
	    }
	    cout<<cnt<<endl;
	    
	}

}
