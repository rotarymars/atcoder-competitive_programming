#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s; int n;
  cin>>s>>n;
  cout<<s[--n%s.size()]<<endl;
  return 0;
}
