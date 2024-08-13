#include <bits/stdc++.h>
#define ll long long
using  namespace std;
int main(){
	ll a,b,x;
	cin>>a>>b>>x;
	ll A1=x*a;
	ll var=x*x;
	ll rcnt=0;
	if(A1%var==0) rcnt=A1/var;
	else rcnt=(A1/var)+1;
	ll A2=x*b;
	ll ccnt=0;
	if(A2%var==0) ccnt=A2/var;
	else ccnt=(A2/var)+1;
	ll ans=rcnt*ccnt;
	cout<<ans<<endl;
}