#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool f=true;
    while(n!=0){
        if(n%10==4 || n%10==7) n/=10;
        else {
            f=false;
            break;
        }
    }
    if(f) cout<<"YES"<<endl;
    else{
        if(n%4==0 || n%7==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}