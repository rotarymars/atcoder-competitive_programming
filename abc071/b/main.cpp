#include <iostream>
#include <string>
#include <set>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  set<char>se;
  for(char i='a';i<='z';++i){
    se.insert(i);
  }
  for(auto&i:s){
    se.erase(i);
  }
  if(se.begin()!=se.end()){
    cout<<*se.begin()<<endl;
  }
  else cout<<"None\n";
  return 0;
}
