#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<climits>
#include<cmath>
using namespace std;
/* https://www.codechef.com/problems/TRICOIN */
bool check(long long mid,long long n){
    if((mid*(mid+1))/2<=n) return true;
    else return false;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long lo=1;
        long long ans=-1;     // n=7
        long long hi=100000;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(check(mid,n)){
                ans=max(mid,ans);
                lo=mid+1;
            }
            else{
                hi=mid-1;

            }
        }
        cout<<ans<<endl;

    }
}
// if we int instead of ll then check will cause some trouble.....

// worst approach
// #include <iostream>
// using namespace std;
// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    int i=1;
// 	    int c=0;
// 	    while(n>=i){ 
// 	        c++;
// 	        n-=i;
// 	        i++;
// 	    }
// 	    cout<<c<<endl;
// 	}
// 	return 0;
// }
