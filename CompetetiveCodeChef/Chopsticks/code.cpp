#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int i=0;
    int p=0;
    if(n==1){
        cout<<p<<endl;
        return 0;
    }
    sort(arr,arr+n);
    while(i<n-1){
        if(d>=(arr[i+1]-arr[i])){
            p++;
            arr[i+1]=-1;
            arr[i]=-1;
            while(arr[i]==-1) i++;
        }
        else{
            i++;
        }
        
    }
    cout<<p<<endl;

}
