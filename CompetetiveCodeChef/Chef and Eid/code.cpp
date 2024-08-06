#include<iostream>
#include<vector>
#include<algorithm>
// https://www.codechef.com/problems/EID
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int diff=abs(v[0]-v[1]);
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++){
            diff=min(diff,(v[i]-v[i-1]));
        }
        cout<<diff<<endl;

    }

}