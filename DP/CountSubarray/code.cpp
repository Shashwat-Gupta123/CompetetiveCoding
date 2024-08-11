#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<int>dp(n+10,0);
        dp[n-1]=1;
        ll ans=dp[n-1];
        for(int i=n-2;i>=0;i--){
            if(arr[i]<=arr[i+1]) {
                dp[i]=dp[i+1]+1;
                ans+=dp[i];
            }
            else {
                dp[i]=1;
                ans+=dp[i];
            }
        }
        cout<<ans<<endl;
        
    }
	

}
