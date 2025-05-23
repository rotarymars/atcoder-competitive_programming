#include <iostream>
#include <climits>
#include <string>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s,t;
  cin>>s>>t;
  int ans=INT_MAX;
  for(int i=0;i<(int)s.size()-(int)t.size()+1;++i){
    string u=s.substr(i,t.size());
    int tmpcnt=0;
    for(int j=0;j<(int)t.size();++j){
      if(t[j]!=u[j]){
        ++tmpcnt;
      }
    }
    ans=min(ans,tmpcnt);
  }
  cout<<ans<<endl;
  return 0;
}
