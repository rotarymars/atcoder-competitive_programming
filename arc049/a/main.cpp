#include <iostream>
#include <string>
#include <set>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s; int a,b,c,d;
  cin>>s>>a>>b>>c>>d;
  s.insert(s.begin()+a,'"');
  s.insert(s.begin()+b+1,'"');
  s.insert(s.begin()+c+2,'"');
  s.insert(s.begin()+d+3,'"');
  cout<<s<<endl;
  return 0;
}
