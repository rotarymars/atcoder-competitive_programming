#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  int maxminuscnt=0;
  for(int i=(int)s.size()-1;i>=0;--i){
    s[i]-=maxminuscnt%10;
    while(s[i]!='0'){
      if(s[i]<'0')s[i]+=10;
      --s[i];
      ++maxminuscnt;
    }
  }
  cout<<(int)s.size()+maxminuscnt<<endl;
  return 0;
}
