#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  map<string,int>mp;
  for(;n;n--){
    string s;
    cin>>s;
    ++mp[s];
  }
  int prevmax=-1;
  string tempans="";
  for(auto&i:mp){
    if(i.second>prevmax){
      prevmax=i.second;
      tempans=i.first;
    }
  }
  cout<<tempans<<endl;
  return 0;
}
