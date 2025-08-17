#include <iostream>
#include <string>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n,m;
  string s,t;
  cin>>n>>m>>s>>t;
  vector<int>imos(s.size()+1,0);
  for(int i=0;i<m;++i){
    int f,s;
    cin>>f>>s;
    ++imos[--f];
    --imos[s];
  }
  for(int i=0;i<s.size();++i){
    imos[i+1]+=imos[i];
  }
  for(int i=0;i<s.size();++i){
    if(imos[i]%2==0){
      cout<<s[i];
    }
    else{
      cout<<t[i];
    }
  }
  cout<<endl;
  return 0;
}
