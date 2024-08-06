#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int cnt=0;
        for(int i=0;i<n;i++) cin>>v[i];
        int j=1;
        int x=v[n-j];
        int temp=-1;
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++){
            if(v[i]==v[i-1] && temp!=v[i-1]){
                temp=v[i-1];
                v[i-1]=v[i-1]+x;
                cnt++;
            }
            else if(v[i]==v[i-1] && temp==v[i]){
                j++;
                x=v[n-j];
                temp=v[i-1];
                v[i-1]=v[i-1]+x;
                cnt++;

            }

        }
        cout<<cnt<<endl;




    }

}
