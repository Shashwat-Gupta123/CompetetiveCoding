#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long noo=0;
        long long noe=0;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x%2!=0) noo++;
            else noe++;
        }
        cout<<noo*noe<<endl;
    }
}
