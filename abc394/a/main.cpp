#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  cout<<string(count(s.begin(),s.end(),'2'),'2')<<endl;
  return 0;
}
