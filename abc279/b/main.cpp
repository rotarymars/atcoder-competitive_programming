#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s,t;
  cin>>s>>t;
  if(s.size()<t.size()){
    cout<<"No"<<endl;
    return 0;
  }
  for(int i=0;i<(int)s.size()-(int)t.size()+1;i++){
    if(s.substr(i,t.size())==t){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;
  return 0;
}
