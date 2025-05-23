#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  map<int,vector<int>>mp;
  for(int i=0;i<n;++i){
    int a;
    cin>>a;
    mp[a].push_back(i);
  }
  int ans=1;
  for(auto&[_,second]:mp){
    sort(second.begin(),second.end());
    for(int i=0;i<int(second.size());++i){
      for(int j=i+1;j<int(second.size());++j){
        int diff=second[j]-second[i];
        int streak=2;
        auto it=lower_bound(second.begin(),second.end(),second[j]);
        while(true){
          auto tempit=lower_bound(second.begin(),second.end(),*it+diff);
          if(tempit==second.end())break;
          if(*tempit!=*it+diff)break;
          ++streak;
          it=tempit;
        }
        ans=max(ans,streak);
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
