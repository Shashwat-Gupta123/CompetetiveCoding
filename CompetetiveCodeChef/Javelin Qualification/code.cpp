#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
    if(a.second>=b.second) return true;
}
int main() {
	int t;
	cin>>t;
    while(t--){
        int n,target,x;
        cin>>n>>target>>x;
        vector<pair<int,int>>v;  // Id, throw
        int u=1;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            pair<int,int>p(u,temp);
            v.push_back(p);
            u++;
        }
        sort(v.begin(),v.end(),comp);
        for(int i=0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<" ";
        }
        cout<<endl;
        cout<<endl;
        int cnt=0;
        vector<int>ans;
        for(int i=0;i<v.size();i++){
            if(v[i].second>=target){
                cnt++;
                ans.push_back(v[i].first);
                
            }
            else{
                x-=cnt;
                if(x<=0) break;
                int j=i;
                while(x--){
                    cnt++;
                    ans.push_back(v[j].first);
                    j++;
                }
            }
        }
        sort(ans.begin(),ans.end());
        cout<<cnt<<" ";
        for(int ele: ans) cout<<ele<<" ";
        cout<<endl;

        

        
    }

}
