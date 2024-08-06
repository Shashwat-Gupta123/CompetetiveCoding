#include <bits/stdc++.h>
// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/TANDJ1
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,k;
	    cin>>a>>b>>c>>d>>k;
	    int var1=abs(c-a);
	    int var2=abs(d-b);
	    if((var1+var2)==k){
	        cout<<"YES"<<endl;
	        continue;
	    }
	    else{
	        if((var1+var2)<k){
	            if((k-var1+var2)%2==0){
	                cout<<"YES"<<endl;
	                continue;
	            }
	            else{
	                cout<<"NO"<<endl;
	                continue;
	            }
	        }
	        else cout<<"NO"<<endl;
	    }
	}
}