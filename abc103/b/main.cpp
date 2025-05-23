#include <iostream>
#include <string>
using namespace std;
string f(const string &s,int n){
  string ret="";
  for(int i=n;i<(int)s.size()+n;++i){
    ret+=s[i%(int)s.size()];
  }
  return ret;
}
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s,t;
  cin>>s>>t;
  bool ok=false;
  for(int i=0;i<(int)s.size();i++){
    if(f(s,i)==t){
      ok=true;
    }
  }
  cout<<(ok?"Yes":"No")<<endl;
  return 0;
}
