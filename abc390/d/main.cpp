#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
// #define _DEBUG
set<vector<long long>>se;
void f(vector<long long>v){
  se.insert(v);
  for(int i=0;i<(int)v.size();++i){
    for(int j=i+1;j<(int)v.size();++j){
      vector<long long>next;
      for(int k=0;k<(int)v.size();++k){
        if(k==i||k==j){
          if(k==i){
            continue;
          }
          next.push_back(v[i]+v[j]);
        }
        else{
          next.push_back(v[k]);
        }
      }
      sort(next.begin(),next.end());
      f(next);
    }
  }
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<long long>v(n);
  for(auto&i:v){
    cin>>i;
  }
  sort(v.begin(),v.end());
  f(v);
  set<long long>ans;
  for(auto&i:se){
    long long temp=0;
    for(auto&j:i){
      temp^=j;
    }
    ans.insert(temp);
  }
  cout<<ans.size()<<endl;
  return 0;
}