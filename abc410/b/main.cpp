#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int compute(const vector<int>&v){
  int min=*min_element(v.begin(),v.end());
  return distance(v.begin(),find(v.begin(),v.end(),min));
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,q;
  cin>>n>>q;
  vector<int>v(n,0);
  vector<int>out;
  for(int i=0;i<q;++i){
    int x;
    cin>>x;
    if(x==0){
      int computed=compute(v);
      ++v[computed];
      out.push_back(1+computed);
    }else{
      ++v[x-1];
      out.push_back(x);
    }
  }
  bool first=true;
  for(auto&i:out){
    if(first){
      first=false;
    }else{
      cout<<" ";
    }
    cout<<i;
  }
  cout<<endl;
  return 0;
}
