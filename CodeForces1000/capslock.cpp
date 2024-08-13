#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	string ans="";
	if(s[0]>=97) ans.push_back((char)(s[0]-32));
	else ans.push_back(s[0]);
	for(int i=1;i<s.length();i++){
		if(s[i]<97) ans.push_back((char)(s[i]+32));
		else ans.push_back(s[i]);
	}
	cout<<ans<<endl;

}