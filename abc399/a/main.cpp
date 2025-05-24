#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  string s,t;
  cin>>s>>t;
  int hamming=0;
  for(int i=0;i<(int)s.size();i++){
    if(s[i]!=t[i]){
      hamming++;
    }
  }
  cout<<hamming<<endl;
  return 0;
}
