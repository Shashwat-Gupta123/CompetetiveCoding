#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    if(n==1){
	        cout<<1<<endl;
	        continue;
	    }
	    sort(arr,arr+n);
	    int cnt=0;
	    for(int i=0;i<n-1;i++){
	        int j=i;
	        while(arr[j]==arr[j+1]){
	            j++;
	        }
	        int x1=j-0;
	        int x2=n-1-j;
	        if(x1>=x2) cnt++;
	    }
	    cnt++;
	    cout<<cnt<<endl;
	}

}
