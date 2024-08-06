// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/PROGLANG
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,a1,b1,a2,b2;
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    vector<int>L;
	    vector<int>c1;
	    vector<int>c2;
	    L.push_back(max(a,b));
	    L.push_back(min(a,b));
	    c1.push_back(max(a1,b1));
	    c1.push_back(min(a1,b1));
	    c2.push_back(max(a2,b2));
	    c2.push_back(min(a2,b2));
	    if(L[0]==c1[0]){
	        if(L[1]==c1[1]){
	            cout<<1<<endl;
	            continue;
	        }
	    }
	    if(L[0]==c2[0]){
	        if(L[1]==c2[1]){
	            cout<<2<<endl;
	            continue;
	        }
	        else cout<<0<<endl;
	    }
	    else cout<<0<<endl;
	   }
	
	return 0;
}
/*#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,a1,b1,a2,b2;
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    string l=to_string(a)+to_string(b);
	    string c1=to_string(a1)+to_string(b1);
	    string c2=to_string(a2)+to_string(b2);
	    sort(l.begin(),l.end());
	    sort(c1.begin(),c1.end());
	    sort(c2.begin(),c2.end());
	    if(l==c1) cout<<1<<endl;
	    else if(l==c2) cout<<2<<endl;
	    else cout<<0<<endl;
	    
	}
	
	return 0;
}
*/