#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto&i:v){
    cin>>i;
  }
  vector copy=v;
  sort(copy.begin(),copy.end());
  cout<<distance(v.begin(),find(v.begin(),v.end(),*prev(copy.end(),2)))+1<<endl;
  return 0;
}
