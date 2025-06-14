#include <iostream>
#include <vector>
#include <utility>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto&i:v){
    cin>>i;
  }
  vector<pair<char,int>>data;
  for(int i=0;i<n-1;i++){
    if(v[i]<v[i+1]){
      if(data.empty()){
        data.push_back({'<',1});
      }
      else if(data.back().first=='<'){
        data.back().second++;
      }
      else{
        data.push_back({'<',1});
      }
    }
    else{
      if(data.empty()){
        data.push_back({'>',1});
      }
      else if(data.back().first=='>'){
        data.back().second++;
      }
      else{
        data.push_back({'>',1});
      }
    }
  }
  long long ans=0;
  for(int i=0;i<(int)data.size()-1;++i){
    if(data[i].first=='>')ans+=data[i-1].second*data[i+1].second;
  }
  cout<<ans<<endl;
  return 0;
}
