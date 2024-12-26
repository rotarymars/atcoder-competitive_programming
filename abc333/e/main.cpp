#include <iostream>
#include <vector>
#include <utility>
#include <set>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<pair<int,int>>log(n);
  for(int i=0;i<n;++i){
    cin>>log[i].first>>log[i].second;
  }
  set<int>checkset;
  for(int i=0;i<n;++i){
    if(log[i].first==1){
      checkset.insert(log[i].second);
    }
    else{
      if(!checkset.contains(log[i].second)){
        cout<<"-1\n";
        return 0;
      }
    }
  }
  cout<<"Yes\n";
  return 0;
}
