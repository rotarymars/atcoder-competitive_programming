#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;
bool isalltrue(const vector<bool>&v){
  for(auto i:v){
    if(!i)return false;
  }
  return true;
}
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin>>n;
  vector<string>v(n);
  for(auto&i:v){
    cin>>i;
  }
  int ans=std::numeric_limits<int>::max();
  for(int i=0;i<10;++i){
    vector<bool>ok(n,false);
    int t;
    for(int j=0;!isalltrue(ok);++j){
      t=j;
      for(int k=0;k<n;++k){
        if(!ok[k]&&v[k][j%10]=='0'+i){
          ok[k]=true;
          break;
        }
      }
    }
    ans=min(ans,t);
  }
  cout<<ans<<endl;
  return 0;
}
