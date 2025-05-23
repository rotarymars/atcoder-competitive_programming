#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,k;
  string s;
  cin>>n>>k>>s;
  vector<string>tokens;
  char bef=s[0];
  int befcnt=0;
  for(int i=0;i<n;++i){
    if(s[i]==bef){
      ++befcnt;
    }
    else{
      tokens.push_back(string(befcnt,bef));
      bef=s[i];
      befcnt=1;
    }
  }
  tokens.push_back(string(befcnt,bef));
  for(int i=0;i<(int)tokens.size();++i){
    if(tokens[i][0]=='0'){
      continue;
    }
    if(--k==0){
      swap(tokens[i],tokens[i-1]);
    }
  }
  for(auto&i:tokens){
    cout<<i;
  }
  cout<<endl;
  return 0;
}
