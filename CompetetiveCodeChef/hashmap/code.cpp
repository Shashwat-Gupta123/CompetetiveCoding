#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int>m;
    int arr[10]={1,1,1,2,3,4,5,5,6,10};
    int i=1;
    int cnt=1;
    while(i<10){
        if(arr[i]==arr[i-1]) cnt++;
        else{
           m[arr[i]]=cnt;
           cnt=1;
        }
        i++;
    }
    for (auto i = m.begin(); i!= m.end(); ++i) {
    cout << "Key: " << i->first << ", Value: " << i->second <<endl;
}
}