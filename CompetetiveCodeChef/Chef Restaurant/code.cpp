#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
	    long long n,m;
	    cin>>n>>m;
	    vector<pair<long long,long long>>v;
	    for(int i=0;i<n;i++){
	        long long x,y;
	        cin>>x>>y;
	        pair<long long,long long>p(x,y);
	        v.push_back(p);
	    }
	    sort(v.begin(),v.end());
	    vector<long long>ans;
	    for(int i=0;i<m;i++){
	        long long p;
	        cin>>p;
	        long long lo=0;
	        long long hi=v.size()-1;
	        long long idx=-1;
	        bool flag=true;
	        while(lo<hi){
	            long long mid=lo+(hi-lo)/2;
	            if(p>=v[mid].first && v[mid].second>=p){
	                idx=mid;
	                flag=false;
	                break;
	            }
	            else if(v[mid].first<p) lo=mid+1;
	            else hi=mid-1;
	        }
	        if(flag==true){
	            idx=lo;
	       /*333217
                -1
                0
                0
                0
                0
                0
1049163*/     
	            
	        }
	        // analysis
	        
	        if(p>=v[n-1].second) ans.push_back(-1);
	        else if(p<v[0].first){
	            ans.push_back(v[0].first-p);
	        }
	        else if(p>=v[idx].first && p<v[idx].second){
	            ans.push_back(0);
	        }
	        else{
	            if(p>=v[idx].second && p<v[idx+1].first) ans.push_back(v[idx+1].first-p);
	            else ans.push_back(v[idx].first-p);
	        }
	        
	        
	    }
	    for(int i=0;i<ans.size();i++) cout<<ans[i]<<endl;
	}

}
