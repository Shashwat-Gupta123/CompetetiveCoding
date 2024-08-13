#include <bits/stdc++.h>
using namespace std;
// .x.n.h.c.g.t.n.q.c.m
int main(){
	string s;
	cin>>s;
	string ans="";
	unordered_set<char>st;
	st.insert('a');
	st.insert('e');
	st.insert('i');
	st.insert('o');
	st.insert('u');
	st.insert('A');
	st.insert('E');
	st.insert('I');
	st.insert('O');
	st.insert('U');
	st.insert('Y');
	st.insert('y');

	for(int i=0;i<s.length();i++){
		if(s[i]>=65  && s[i]<=90){
			if(st.find(s[i])!=st.end()) continue;
			else{
				ans.push_back('.');
				ans.push_back((char)(s[i]+32));
			}
		}
		else{
			if(st.find(s[i])!=st.end()) continue;
			else{
				ans.push_back('.');
				ans.push_back(s[i]);
			}
		}
	}
	cout<<ans<<endl;
}