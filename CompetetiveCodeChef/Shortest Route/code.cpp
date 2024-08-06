#include <bits/stdc++.h>
using namespace std;
# define ll long long
ll upper_bound(ll v[],ll n,ll temp){
    // Right--> 2
    // if(temp==n-1){

    // }
    ll lo=temp+1;
    ll  hi=n-1;
    ll ans=-1;
    // binary search
    while(lo<=hi){
        ll mid=lo+(hi-lo)/2;
        if(v[mid]==2){
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    return ans;

}
ll lower_bound(ll v[],ll n,ll temp){
    // Right--> 2
    // if(temp==n-1){
    // }
    ll lo=0;
    ll  hi=temp-1;
    ll ans=-1;
    // binary search
    while(lo<=hi){
        ll mid=lo+(hi-lo)/2;
        if(v[mid]==1){
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    return ans;

}
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,m;
	    cin>>n>>m;
        ll v[n];
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=0;i<m;i++){
            ll temp;
            cin>>temp;
            if(v[temp-1]!=0){
                cout<<0<<" ";
            }
            else{
                ll var1=upper_bound(v,n,temp-1);// 4
                ll var2=lower_bound(v,n,temp-1);  //0
               //  cout<<var1<<endl;
                if(var1==-1 && var2==-1){
                    cout<<-1<<" ";
                }
                else if(var1==-1){
                    cout<<temp-1-var2<<" ";
                }
                else if(var2==-1){
                    cout<<var1-temp-1<<" ";
                }
                else{
                    // cout<<"skg"<<endl;
                    ll rt=var1-temp;
                    cout<<temp<<endl;
                    cout<<var1<<endl;
                     ll lt=temp-1-var2;
                    // cout<<lt<<endl;

                    if(rt<=lt){
                        cout<<rt<<" ";
                    }
                    else{
                        cout<<lt<<" ";
                    }
                }
            }
           
        }
        cout<<endl;
	    
	    
	}

}
