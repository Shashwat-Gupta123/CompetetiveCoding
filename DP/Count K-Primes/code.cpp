#include <bits/stdc++.h>
using namespace std;
vector<int>PrimeFactor(100005,0);
void solve(){
    for(int i=2;i<100005;i++) if(PrimeFactor[i]==0)for(int j=i;j<100005;j+=i) PrimeFactor[j]++;
}
int main() {
	solve();
	int t;
	cin>>t;
	while(t--){
	    int a, b, k;
	    cin>>a>>b>>k;
	    int ans=0;
	    for(int x=a;x<=b;x++) (PrimeFactor[x]==k)? ans++:ans;
	    cout<<ans<<endl;
	}
}
