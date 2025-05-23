#include <iostream>
#include <map>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  map<int,int>mp;
  for(int i=0;i<n;i++){
    int tmp;
    cin>>tmp;
    ++mp[tmp];
  }
  for(auto&i:mp){
    if(i.second>=(n+2)/2){
      cout<<i.first<<endl;
      return 0;
    }
  }
  cout<<"?\n";
  return 0;
}
