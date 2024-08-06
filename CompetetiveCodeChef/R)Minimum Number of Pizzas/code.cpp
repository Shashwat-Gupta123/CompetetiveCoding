// https://www.codechef.com/practice/course/2to3stars/LP2TO301/problems/MINPIZZAS?tab=statement
#include <bits/stdc++.h>
using namespace std;
// int GCD(int n,int k){
//     if(k==0) return n;
//     for(int i=min(n,k);i>=2;i--){
//         if(n%i==0 && k%i==0) return i; 
//     }
//     return min(n,k);
// }

long gcd(long a,long b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    long long p=(long long)(n)*(long long)(k);
	    p=p/((long long) GCD(n,k));
	    long long x=p/(long long)k;
	    cout<<x<<endl;
	}
}

