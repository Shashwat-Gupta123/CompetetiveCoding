/*https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/WEIGHTBL*/
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	int t;
    cin>>t;
    while(t--){
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;
        int W=w2-w1;
        if(W<x1*m){
            cout<<0<<endl;
            continue;
        }
        else if(W>=x1*m && W<=x2*m){
            cout<<1<<endl;
            continue;
        }
        else{
            cout<<0<<endl;
        }
    }

}
