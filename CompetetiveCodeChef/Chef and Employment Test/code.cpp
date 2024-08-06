#include <iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
// https://www.codechef.com/problems/CK87MEDI
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>v(n);
	    int mx=INT_MIN;
	    for(int i=0;i<n;i++){
	        cin>>v[i]; 
	        mx=max(mx,v[i]);
	    }
	    while(k--) v.push_back(++mx);
	    sort(v.begin(),v.end());
	    cout<<v[v.size()/2]<<endl;
    
	}
	return 0;
}
