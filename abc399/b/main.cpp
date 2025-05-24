#include <iostream>
#include <vector>
using namespace std;
int cntupper(int tar, vector<int>&v){
  int cnt=0;
  for(auto&i:v){
    if(i>tar){
      cnt++;
    }
  }
  return cnt;
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto&i:v){
    cin>>i;
  }
  for(int i=0;i<n;i++){
    cout<<1+cntupper(v[i],v)<<endl;
  }
  return 0;
}
