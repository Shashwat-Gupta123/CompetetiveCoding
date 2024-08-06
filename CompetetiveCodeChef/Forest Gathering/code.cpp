#include <bits/stdc++.h>
using namespace std;
bool check(vector<pair<long long,long long>>&v,long long mid,long long L,long long W){
    long long res=0;
    for(long long i=0;i<v.size();i++){
        if((long long)((v[i].first+(long long)(v[i].second*mid)))>=L){
            res+=v[i].first+(v[i].second*mid);
        }
    }
    if(res>=W) return true;
    else return false;
}
int main() {
    long long N,W,L;
	cin>>N>>W>>L;
    vector<pair<long long,long long>>v(N);
    for(long long i=0;i<N;i++){
        long long h,r;
        cin>>h>>r;
        pair<long long,long long>p(h,r);
        v.push_back(p);
    }
    long long lo=0;
    long long hi=1000000000000000000;
    long long ans=0;
    while(lo<=hi){
        long long mid=(long long)(lo+(long long)((long long)(hi-lo)/2));
        cout<<lo<<" "<<mid<<" "<<hi<<endl;
        if(check(v,mid,L,W)){
            ans=mid;
            hi=(long long)(mid-1);
           
        }
        else lo=(long long)(mid+1);
        // cout<<lo<<" "<<mid<<" "<<hi<<endl;

    }
    cout<<ans<<endl;


}
