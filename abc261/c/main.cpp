#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  map<string,int>mp;
  for(int i=0;i<n;++i){
    string s;
    cin>>s;
    if(mp[s]>0){
      cout<<s<<'('<<mp[s]<<")\n";
    }
    else{
      cout<<s<<'\n';
    }
    ++mp[s];
  }
  return 0;
}
