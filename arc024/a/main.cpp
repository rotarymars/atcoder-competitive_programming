#include <iostream>
#include <set>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int l,r;
  cin>>l>>r;
  multiset<int>sl,sr;
  for(int i=0;i<l;i++){
    int a;
    cin>>a;
    sl.insert(a);
  }
  for(int i=0;i<r;i++){
    int a;
    cin>>a;
    sr.insert(a);
  }
  int ans=0;
  for(auto&i:sl){
    if(sr.contains(i)){
      ++ans;
      sr.erase(sr.find(i));
    }
  }
  cout<<ans<<endl;
  return 0;
}
