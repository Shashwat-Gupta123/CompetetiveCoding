// https://www.codechef.com/problems/EXAM1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ra,ca;
        cin>>ra;
        cin>>ca;
        int cnt=0;
        for(int i=0;i<ra.length();i++){
            if(ra[i]==ca[i]){
                cnt++;
            }
            else if(ca[i]=='N'){
                continue;
            }
            else i++;
                
        }

        cout<<cnt<<endl;
    }
    
// 3 6 ABCDAB ABCDAB 8 DDCABCCA DNCBBBBA 3 CDD NDC

}