#include <bits/stdc++.h>
#include<climits>
using namespace std;
int main() {
	int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        int i=0;
        int j=0;
        int ans=INT_MAX;
        while(j<n){
            if((j-i)==k-1){
                int var=arr[j]-arr[i];
                ans=min(ans,var);
                i++;
            }
            else j++;
        }
        cout<<ans<<endl;

    }

}
