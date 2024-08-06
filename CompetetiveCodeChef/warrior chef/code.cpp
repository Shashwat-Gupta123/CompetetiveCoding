#include <iostream>
#include<climits>
/*https://www.codechef.com/problems/WARRIORCHEF*/
using namespace std;
bool check(int mid,int arr[],int n,int h){
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]<=mid){
            flag=true;
        }
        else if(h>arr[i]){
            h-=arr[i];
            flag=true;
        }
        else{
            flag=false;
            break;
        }
    }
    return flag;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,h;
	    cin>>n>>h;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int lo=0;
	    int hi=INT_MIN;
	    int ans=-1;
	    for(int j=0;j<n;j++){
	        hi=max(hi,arr[j]);
	    }
	    while(lo<=hi){
	        int mid=lo+(hi-lo)/2;
	        if(check(mid,arr,n,h)){
	            ans=mid;
	            hi=mid-1;
	        }
	        else{
	            lo=mid+1;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
