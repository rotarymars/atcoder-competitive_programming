#include <cstdio>
#include <iostream>
#include <map>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  map<int,int>mp;
  ++mp[a];
  ++mp[b];
  ++mp[c];
  ++mp[d];
  bool yes=false;
  for(int i=1;i<=13;++i){
    map copymp=mp;
    ++copymp[i];
    if(copymp.size()==2){
      bool two=false,three=false;
      for(auto&j:copymp){
        if(j.second==2){
          two=true;
        }
        if(j.second==3){
          three=true;
        }
      }
      if(two&&three){
        yes=true;
      }
    }
  }
  cout<<(yes?"Yes":"No")<<endl;
  return 0;
}
