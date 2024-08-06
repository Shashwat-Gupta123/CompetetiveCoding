#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	   // vector<long long>v;
	    vector<long long>ans;
	    for(int i=0;i<n;i++){
	        long long x;
	        cin>>x;
	        if(i==0) ans.push_back(x);
	        else{
	            long long lo=0;
	            long long hi=ans.size()-1;
	            long long prev=-1;
	            while(lo<hi){
	                long long mid=lo+(hi-lo)/2;
	                if(ans[mid]>x){
	                    hi=mid-1;
	                    prev=mid;
	                } 
	                else lo=mid+1;
	            }
	            if(ans[lo]>x) ans[lo]=x;
	            else{
	                if(prev!=-1) ans[prev]=x;
	                else ans.push_back(x);
	            }
	        }
	    }
	    sort(ans.begin(),ans.end());
	    cout<<ans.size()<<" ";
	    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
	    cout<<endl;
	}

}
