#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	bool f=true;
	int h_c=1;
	int l_c=2;
	int o_c=1;
	// bool f=true;
	int e_c=1;
	for(int i=0;i<s.length();i++){
		if(s[i]=='h' && h_c>0) h_c=0;
		else if(s[i]=='e' && h_c==0 && e_c>0) e_c=0;
		else if(s[i]=='l' && h_c==0 && e_c==0 && l_c>0) l_c--;
		else if(s[i]=='o' && h_c==0 && e_c==0 && l_c==0 && o_c>0) o_c=0;
		if(h_c==0 && e_c==0 && l_c==0 && o_c==0){
			cout<<"YES"<<endl;
			f=false;
			break;
		}

	}
	// if(h_c==0 && e_c==0 && l_c==0 && o_c>0){
	// 		cout<<"YES"<<endl;
			
	// }
	if(f==true) cout<<"NO"<<endl;
	

}