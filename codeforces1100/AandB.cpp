#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int a[n],b[n-1],c[n-2];
	int s1=0;
	int s2=0;
	int s3=0;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		s1+=a[i];
	}
	for(int i=0;i<n-1;i++) {
		cin>>b[i];
		s2+=b[i];
	}

	for(int i=0;i<n-2;i++) {
		cin>>c[i];
		s3+=c[i];
	}
	cout<<s1-s2<<endl<<s2-s3<<endl;
	



}