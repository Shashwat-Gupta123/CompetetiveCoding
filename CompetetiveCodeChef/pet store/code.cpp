/*//www.codechef.com/problems/PETSTORE*/#include <iostream>
#include<vector>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    if(n%2!=0) cout<<"NO"<<endl;
	    else{
	    vector<int>v(101,0);
	    for(int i=0;i<n;i++){
	        v[arr[i]]++;
	    }
	    bool flag=true;
	    for(int j=0;j<v.size();j++){
	        if(v[j]!=0){
	            if(v[j]%2!=0){
	                cout<<"NO"<<endl;
	                flag=false;
	                break;
	            }
	        }
	        
	    }
	    if(flag==true)  cout<<"YES"<<endl;
	    }
	   
	}
	return 0;
}
