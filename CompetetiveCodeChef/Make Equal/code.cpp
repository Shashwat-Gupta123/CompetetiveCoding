#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        if(arr[0]!=arr[n-1]){
            cout<<"NO"<<endl;
        }
        else{
            bool flag=true;
            for(int i=0;i<n;i++) if(arr[i]<arr[0]) flag=false;
            if(flag==false) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    

}
