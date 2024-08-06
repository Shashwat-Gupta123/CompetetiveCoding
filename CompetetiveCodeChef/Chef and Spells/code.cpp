// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/CHFSPL
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    vector<int>v;
	    v.push_back(a);
	    v.push_back(b);
	    v.push_back(c);
	    sort(v.begin(),v.end());
	    cout<<v[2]+v[1]<<endl;
	    
	}
	return 0;
}
