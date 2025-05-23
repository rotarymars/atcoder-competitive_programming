#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  bool status=false;
  int cnt=0;
  for(int i=0;i<n;++i){
    string s;
    cin>>s;
    if(s=="login"){
      status=true;
    }
    if(s=="logout"){
      status=false;
    }
    if(s=="public"){

    }
    if(s=="private"&&!status){
      ++cnt;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
