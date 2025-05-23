#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s,t;
  cin>>s>>t;
  sort(s.begin(),s.end());
  sort(t.begin(),t.end(),greater<>());
  if(s<t)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
