#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool check(vector<int>&v,int m){
  vector<bool>exist(m+1,false);
  for(int&i:v){
    if(i<=m)exist[i]=true;
  }
  return count(exist.begin(),exist.end(),true)==m;
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector<int>v(n);
  for(auto&i:v)cin>>i;
  while(check(v,m)){
    v.pop_back();
  }
  cout<<n-v.size()<<endl;
  return 0;
}
