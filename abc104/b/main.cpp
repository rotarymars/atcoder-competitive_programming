#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  bool flag=true;
  if(s[0]!='A'){
    flag=false;
  }
  int cind=-1;
  for(int i=2;i<(int)s.size()-1;++i){
    if(s[i]=='C'){
      cind=i;
      break;
    }
  }
  if(cind==-1){
    flag=false;
  }
  for(int i=1;i<(int)s.size();++i){
    if(isupper(s[i])&&i!=cind){
      flag=false;
    }
  }
  cout<<(flag?"AC":"WA")<<endl;
  return 0;
}
