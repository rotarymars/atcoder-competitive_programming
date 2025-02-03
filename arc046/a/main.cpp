#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  vector<int>v;
  v.reserve(50);
  int a=1;
  while(50!=(int)v.size()){
    string s=to_string(a);
    if(s==string(s.size(),s[0])){
      v.push_back(a);
    }
    ++a;
  }
  int n;
  cin>>n;
  cout<<v[--n]<<endl;
  return 0;
}
