#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        set<int>s;
        for(int i=0;i<n;i++){
            int var;
            cin>>var;
            s.insert(var);
        }
        int v=0;
        while(true){
            if(s.find(v)!=s.end()){
                v++;
                
            }
            else{
                if(k==0) break;
                v++;
                k--;
            }
        }
        cout<<v<<endl;
    }
}
