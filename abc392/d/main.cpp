#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <iomanip>
using namespace std;
// #define _DEBUG
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<vector<pair<int,int>>>v(n);
  vector<int>size(n);
  for(int i=0;i<n;++i){
    int k;
    cin>>k;
    vector<int>tmp(k);
    size[i]=k;
    for(int j=0;j<k;++j){
      cin>>tmp[j];
    }
    sort(tmp.begin(),tmp.end());
    int befnum=-1,cnt=1;
    for(int j=0;j<k;++j){
      if(tmp[j]==befnum){
        ++cnt;
      }
      else{
        if(befnum==-1){
          befnum=tmp[j];
          cnt=1;
          continue;
        }
        v[i].push_back(make_pair(befnum,cnt));
        befnum=tmp[j];
        cnt=1;
      }
    }
    v[i].push_back(make_pair(befnum,cnt));
    #ifdef _DEBUG
    for(int j=0;j<(int)v[i].size();++j){
      cout<<'('<<v[i][j].first<<' '<<v[i][j].second<<')'<<' ';
    }
    cout<<endl;
    #endif
  }
  auto includesamefirst=[&](pair<int,int>a,pair<int,int>b){
    return a.first<b.first;
  };
  long double ans=0;
  for(int i=0;i<n;++i){
    for(int j=i+1;j<n;++j){
      long double prob=0;
      for(int k=0;k<(int)v[i].size();++k){
        auto it=lower_bound(v[j].begin(),v[j].end(),v[i][k],includesamefirst);
        if(it->first==v[i][k].first){
          prob+=(long double)v[i][k].second*(long double)it->second/(long double)size[i]/(long double)size[j];
          #ifdef _DEBUG
          cout<<v[i][k].second<<' '<<it->second<<' '<<v[i].size()<<' '<<v[j].size()<<endl;
          #endif
        }
      }
      #ifdef _DEBUG
      cout<<prob<<endl;
      #endif
      ans=max(ans,prob);
    }
  }
  cout<<fixed<<setprecision(10)<<ans<<endl;
  return 0;
}
