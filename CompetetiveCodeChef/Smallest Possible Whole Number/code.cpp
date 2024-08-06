// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/SMOL
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,y;
	    cin>>n>>y;
	    if(y!=0){
	        int k=n/y;
	        cout<<n-(k*y)<<endl;
	    }
	    else{
	        cout<<n<<endl;
	    }
	}

}
