#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,s;
  cin>>n>>s;
  int bef=0;
  cin>>bef;
  if(bef>s){
    cout<<"No\n";
    return 0;
  }
  for(int i=1;i<n;i++){
    int a;
    cin>>a;
    if(a-bef<=s){
      bef=a;
      continue;
    }
    cout<<"No\n";
    return 0;
  }
  cout<<"Yes\n";
  return 0;
}
