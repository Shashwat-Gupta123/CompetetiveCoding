#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    ll n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    while(q--){
        ll var;
        cin>>var;
        ll lo=0;
        ll hi=n-1; 
        bool flag=true;
        while(lo<=hi){
            ll mid=lo+(hi-lo)/2;
            if(v[mid]==var){
                flag=false;
                break;
            }
            else if(v[mid]>var) hi=mid-1;
            else lo=mid+1;
        }
        if(flag==false){
            cout<<0<<endl;
        }
        else {
            ll small=hi-1;
            if(small!=0 && small%2==0){
                cout<<"POSITIVE"<<endl;
            }
            else if(small==0){
                cout<<"POSITIVE"<<endl;
            }
            else{
                cout<<"NEGATIVE"<<endl;
            }
        }

        
    }
}