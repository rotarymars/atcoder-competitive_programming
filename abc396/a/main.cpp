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
  bool flag=false;
  for(int i=0;i<n-2;++i){
    if(v[i]==v[i+1]&&v[i+1]==v[i+2]){
      flag=true;
    }
  }
  cout<<(flag?"Yes":"No")<<endl;
  return 0;
}
