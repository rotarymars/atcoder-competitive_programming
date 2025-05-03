#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int q;
  cin>>q;
  vector<pair<long long,long long>>v;
  int startindex=0;
  for(int i=0;i<q;++i){
    int mode;
    cin>>mode;
    if(mode==1){
      long long length;
      cin>>length;
      if(v.empty()){
        v.emplace_back(make_pair(0,length));
      }
      else{
        v.emplace_back(make_pair(v.back().first+v.back().second,length));
      }
    }
    else if(mode==2){
      ++startindex;
    }
    else if(mode==3){
      int k;
      cin>>k;
      cout<<v[startindex+k-1].first-v[startindex].first<<'\n';
    }
  }
  return 0;
}
