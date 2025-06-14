#include <iostream>
#include <set>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  set<int>s;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    s.emplace(a);
  }
  cout<<s.size()<<endl;
  bool first=true;
  for(auto i:s){
    if(first){
      first=false;
      cout<<i;
      continue;
    }
    cout<<" "<<i;
  }
  cout<<endl;
  return 0;
}
