#include <iostream>
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
  bool flag=true;
  for(int i=1;i<n;++i){
    if(v[i]<=v[i-1]){
      flag=false;
    }
  }
  cout<<(flag?"Yes":"No")<<endl;
  return 0;
}
