#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int>>v;
        int u=1;
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            pair<int,int>p(u,x);
            u++;
            v.push_back(p);
        }
        // (1 4)  (2 3) (3 2) (4 8)
        // k=6
        int ans=-1;
        int var=INT_MAX;
        for(int i=0;i<v.size();i++){
            if(v[i].second<k && k%v[i].second==0){
                int t=(k/v[i].second)-1;
                if(t<var){
                    ans=v[i].second;  //1
                    var=t;  // 1
                }
            
            }
                
            
        }
        cout<<ans<<endl;
        
    }
}
