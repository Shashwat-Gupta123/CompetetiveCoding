#include <bits/stdc++.h>
using namespace std;
bool check(long long &mid,long long arr[], long long n,long long &h){
        long long m=mid;
        long long count=0;
        // int n=piles.size();
        for(int i=0;i<n;i++){
            if(arr[i]<=m){
                count++;
            }
            else if((arr[i]%m)==0){
                count+=(long long)arr[i]/m;

            }
            else{
                count+=(long long)arr[i]/(long long)m+1;
            
            }
        
        }
        if(count<=h){
            return true;
        }
        else{
            return false;
        }


    }
int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
	    long long n,h;
	    cin>>n>>h;
	    long long arr[n];
	    for(long long i=0;i<n;i++) cin>>arr[i];
	    long long lo=1;
	    long long hi=INT_MIN;
	    for(long long i=0;i<n;i++) hi=max(hi,arr[i]);
	    int ans=lo;
	    while(lo<=hi){
	        long long mid=lo+(hi-lo)/2;
	        if(check(mid,arr,n,h)){
	            ans=mid;
	            hi=mid-1;
	        }
	        else  lo=mid+1;
	    }
	    cout<<ans<<endl;
	     
	}

}
