#include <iostream>
#include <set>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  set<int>index;
  for(int i=0;i<(int)s.size()-1;++i){
    if(s[i]=='W'&&s[i+1]=='A'){
      index.insert(i);
    }
  }
  while(!index.empty()){
    auto it=index.begin();
    s[*it]='A';
    s[*it+1]='C';
    if(s[*it-1]=='W'){
      index.insert(*it-1);
    }
    index.erase(it);
  }
  cout<<s<<endl;
  return 0;
}
