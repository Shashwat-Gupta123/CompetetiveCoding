#include <iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(s.length()==1 && k==1){
            if(s=="1") cout<<"10"<<endl;    
            else cout<<"1"<<endl;
            continue;
        }
        while(k>0){
            if(k==2 && s[0]=='0'){
                s.push_back('0');
                for(int i=0;i<s.length();i++){
                    if(s[i]=='0'){
                        s[i]='1';
                        break;
                    }
                }
                break;
            }
            else if(k%2==0){
                s.push_back('0');
                s.push_back('0');
                k-=2;
            }
            else{
                for(int i=0;i<s.length();i++){
                    if(s[i]=='0'){
                        s[i]='1';
                        break;
                    }
                }
                k--;
            }

        }
        cout<<s<<endl;

    }
}
// 