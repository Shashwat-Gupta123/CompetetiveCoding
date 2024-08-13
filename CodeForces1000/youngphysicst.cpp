#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sX=0;
	int sY=0;
	int sZ=0;
	while(n--){
		int x1, x2, x3;
		cin>>x1>>x2>>x3;
		sX+=x1;
		sY+=x2;
		sZ+=x3;
	}
	if(sX==0 && sY==0 && sZ==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}