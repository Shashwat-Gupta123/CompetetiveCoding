#include <iostream>
#include<vector>
using namespace std;
int main() {
  vector<int>v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(5);
  v.push_back(5);
  v.push_back(5);
  v.push_back(5);
  v.push_back(5);



  cout<<"size-> "<<v.size()<<endl;
  cout<<"capacity-> "<<v.capacity()<<endl;
  cout<<sizeof(v)<<endl;
}