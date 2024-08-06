#include <iostream>
using namespace std;

int main() {
	int t,m,x,y,a;
	cin>>t;
	while(t--)
	{c
	    cin>>m>>x>>y;
	    int arr[101];
	    for(int i=0;i<101;i++)
	    {
	    if(i==0)
	    arr[i]=0;
	    else
	    arr[i]=1;
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>a;
	        for(int j=max(1,(a-(x*y)));j<=min(100,(a+(x*y)));j++)
	        arr[j]=0;
	    }
	    int sum=0;
	    for(int i=1;i<101;i++)
	    sum+=arr[i];
	    cout<<sum<<endl;
	}
	return 0;
}