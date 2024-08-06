#include <iostream>
#include<vector>
#include<set>
using namespace std;
/*https://www.codechef.com/problems/TSTROBOT*/
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    string s;
	    cin>>s;
	    set<int>v;
	    v.insert(x);
	    for(char ch:s){
	        if(ch=='R'){
	            x++;
	            v.insert(x);
	            
	        }
	        else if(ch=='L'){
                 x--;
	             v.insert(x);
	            
	   
	        }
	        
	    }
	    int c=0;
	    for(int ele:v){
	        cout<<ele<<" ";
            c++;
	    }
	    cout<<c<<endl;
	    
	}
	return 0;
}
