#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
unordered_set<long long>xornum;
void compute_xornum(const vector<vector<long long>>&v,vector<vector<bool>>&used,long long currentxornum,int start_i=0,int start_j=0){
  for(int i=start_i;i<(int)v.size();++i){
    for(int j=(i==start_i?start_j:0);j<(int)v[i].size();++j){
      if(used[i][j])continue;
      if(i+1<(int)v.size())if(!used[i+1][j]){
        used[i+1][j]=used[i][j]=true;
        xornum.insert(currentxornum^v[i][j]^v[i+1][j]);
        compute_xornum(v,used,currentxornum^v[i][j]^v[i+1][j],i,j);
        used[i+1][j]=used[i][j]=false;
      }
      if(j+1<(int)v[i].size())if(!used[i][j+1]){
        used[i][j+1]=used[i][j]=true;
        xornum.insert(currentxornum^v[i][j]^v[i][j+1]);
        compute_xornum(v,used,currentxornum^v[i][j]^v[i][j+1],i,j);
        used[i][j+1]=used[i][j]=false;
      }
    }
  }
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w;
  cin>>h>>w;
  vector<vector<long long>>v(h,vector<long long>(w));
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      cin>>v[i][j];
    }
  }
  long long wholexornum=0;
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      wholexornum^=v[i][j];
    }
  }
  vector<vector<bool>>used(h,vector<bool>(w,false));
  compute_xornum(v,used,0ll);
  long long ans=-1;
  for(auto x:xornum){
    ans=max(ans,wholexornum^x);
  }
  ans=max(ans,wholexornum);
  cout<<ans<<endl;
  return 0;
}
