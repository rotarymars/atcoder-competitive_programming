#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s="indeednow";
  int n;
  cin>>n;
  for(int i=0;i<n;++i){
    string t;
    cin>>t;
    bool flag=true;
    for(auto&i:s){
      if(count(s.begin(),s.end(),i)!=count(t.begin(),t.end(),i)){
        cout<<"NO\n";
        flag=false;
        break;
      }
    }
    if(flag){
      cout<<"YES\n";
    }
  }
  return 0;
}
