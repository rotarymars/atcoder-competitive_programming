#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s>>s;
  auto it=find(s.begin(),s.end(),'1');
  if(distance(s.begin(),it)%2==0)cout<<"Takahashi\n";
  else cout<<"Aoki\n";
  return 0;
}
