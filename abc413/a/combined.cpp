#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  int sum=0;
  for(;n--;){
    int a;
    cin>>a;
    sum+=a;
  }
  if(sum>m){
    cout<<"No"<<'\n';
  }else{
    cout<<"Yes"<<'\n';
  }
  return 0;
}