#include <iostream>
#include <string>
#include <set>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int maxscore=-1,ans=-1;
  set<string>se;
  for(int i=0;i<n;++i){
    string s; int score;
    cin>>s>>score;
    if(!se.contains(s)&&score>maxscore){
      maxscore=score;
      ans=i+1;
    }
    se.insert(s);
  }
  cout<<ans<<endl;
  return 0;
}
