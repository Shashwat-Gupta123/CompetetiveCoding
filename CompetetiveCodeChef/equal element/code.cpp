//https://www.codechef.com/problems/EQUALELE
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<climits>
#include<cmath>
using namespace std;
/*3
3
1 2 3 --->2
4
2 2 3 1 -->2
4
3 1 2 4 --->3 */
/*1
6
1 1 1 1 1 1*/
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans=-1;
        int c=0;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                c++;
                ans=max(ans,c);
            }
            else{
                ans=max(ans,c);
                c=0;
            }
        }
        ans+=1;
        cout<<ans<<endl;
        cout<<n-ans<<endl;

    }


}