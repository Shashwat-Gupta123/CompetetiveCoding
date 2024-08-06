#include <bits/stdc++.h>
using namespace std;
pair<int,int> CheckBound(int arr[],int n,int target){
    pair<int,int>ans;
    // binary search
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(target==arr[mid]){
            if(mid==0){
                ans.first=-1;
                ans.second=mid+1;
                return ans;
            }
            else if(mid==n-1){
                ans.first=mid-1;
                ans.second=-1;
                return ans;
            }
            else{ 
                ans.first=arr[mid-1];
                ans.second=arr[mid+1];
                return ans;
            }
        }
        else if(arr[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    if(hi<0){
        ans.first=-1;
        ans.second=arr[lo];

    }
    else if(lo>=n){ 0
    5 
        ans.first=arr[hi];
        ans.second=-1;
    }
    else{
        ans.first=arr[hi];
        ans.second=arr[lo];
    }
    return ans;

}
int main(){
    int arr[10]={1,2,3,4,5,8,9,10};
    int t1,t2,t3,t4;
    t1=0;
    t2=4;
    t3=6;
    t4=20;
    pair<int,int>temp=CheckBound(arr,8,t4);
    cout<<temp.first<<" "<<temp.second<<endl;

}     