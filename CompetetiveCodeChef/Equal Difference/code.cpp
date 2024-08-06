#include <bits/stdc++.h>
#include<map>
#include<climits>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        if(n==1 || n==2){
            cout<<0<<endl;
            continue;
        }
        sort(arr,arr+n);
        map<int,int>m;
        int i=0;
        int cnt=1;
        // 2 1 5 2 2 
        while(i<n-1){
        if(arr[i]==arr[i+1]) cnt++;
        else{
           m[arr[i]]=cnt;
           cnt=1;
        }
        i++;
    }
    m[arr[n-1]]=cnt;
    int ans=INT_MIN;
    // for (auto i = m.begin(); i!= m.end(); ++i) {
    // cout << "Key: " << i->first << ", Value: " << i->second <<endl;
    // }
    for (auto i = m.begin(); i!= m.end(); ++i) {
         ans=max(ans,i->second);
    }
    if(ans==1){
        cout<<n-2<<endl;
        continue;
    }
    else{
        cout<<n-ans<<endl;
    }
    
    
    }
}
