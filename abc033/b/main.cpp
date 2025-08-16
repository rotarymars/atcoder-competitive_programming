#include <iostream>
#include <vector>
#include <utility>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin>>n;
  vector<pair<string,int>>v(n);
  int sum=0;
  for(auto&i:v){
    cin>>i.first>>i.second;
    sum+=i.second;
  }
  for(int i=0;i<n;++i){
    if(v[i].second*2>sum){
      cout<<v[i].first<<endl;
      return 0;
    }
  }
  cout<<"atcoder\n";
  return 0;
}
