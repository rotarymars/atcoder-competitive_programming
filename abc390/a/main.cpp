#include <iostream>
#include <utility>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  vector<int>now(5);
  for(auto&i:now){
    cin>>i;
  }
  vector<int>ans{1,2,3,4,5};
  for(int i=0;i<4;++i){
    vector cp=now;
    swap(cp[i],cp[i+1]);
    if(cp==ans){
      cout<<"Yes\n";
      return 0;
    }
  }
  cout<<"No\n";
  return 0;
}
