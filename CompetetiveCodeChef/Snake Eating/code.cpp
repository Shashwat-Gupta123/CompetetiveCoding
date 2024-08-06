#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
    long long t;
	cin>>t;
	while(t--){
	    long long n,q;
	    cin>>n>>q;
	    long long arr[n];
	    for(long long i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);   // n logn
        while(q--){
          ll k;
          cin>>k;
          ll lo=0;
          ll hi=n-1;
          ll j=0;
        //   ll mid=lo+(hi-lo)/2;
         //ll mid;
          while(lo<hi){
            ll Mid=lo+(hi-lo)/2;
            mid=Mid;
            if(arr[Mid]>=k) hi=Mid-1;
            else lo=Mid+1;
            // if(lo==hi) break;
            // ll mid=lo+(hi-lo)/2;
          }
          while(arr[mid]==k) mid--;
          if(arr[n-1]<k){
            cout<<0<<endl;
            continue;
          }
          cout<<"mid-->"<<mid<<endl;
         ll kahaga=k-arr[mid];
          j=kahaga;
          

          
          cout<<"arr[mid]-->"<<arr[mid]<<endl;
          if(arr[mid]<k){
            cout<<n-1-mid<<endl;
            // continue;
          }
          else{
            cout<<n-1-mid+1<<endl;
          }

        }

}
}
