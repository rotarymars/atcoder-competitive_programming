#include <iostream>
#include <set>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  set<char>se{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  for(auto&i:s){
    se.erase(i);
  }
  cout<<*se.begin()<<endl;
  return 0;
}
