#include <iostream>
#include<vector>
#include<climits>
#include<algorithm>
// https://www.codechef.com/problems/CENS20D
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<int>v(n); for(int i=0;i<n;i++) cin>>v[i];
        int cnt=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(v[i]==(v[i] & v[j])) cnt++;
            }
        }
        cout<<cnt<<endl;


    }
}