#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool valid(ll arr[],ll n,ll mid,ll h){
    ll time=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=mid){
            time++;
        }
        else{
            if(arr[i]%mid==0) time+=arr[i]/mid;
            else time+=(arr[i]/mid+1);
        }
    }
    if(time>=h) return true;
    else return false;

}
int main(){
    ll x;
    cin>>x;
    while(x--){
        ll n,h;
        cin>>n>>h;
        ll arr[n];
        ll hi=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            hi+=arr[i];
    }
    ll lo=1;
    // Binary Search
    ll ans=1;
    while(lo<=hi){
        ll mid=lo+(hi-lo)/2;
        if(valid(arr,n,mid,h)){
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    cout<<ans<<endl;
    }
}