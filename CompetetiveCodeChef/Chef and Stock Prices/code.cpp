#include <bits/stdc++.h>
using namespace std;
// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/CSTOCK
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float s,a,b,c;
	    cin>>s>>a>>b>>c;
	    float p;
	    if(p>=0) p=s+((s*c)/100);
	    else  p=s-((s*c)/100);
	    if(p>=a && p<=b){
	        cout<<"Yes"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}

}
