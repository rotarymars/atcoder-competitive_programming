#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string x;
  int n;
  cin>>x>>n;
  vector<string>v(n);
  for(auto&i:v){
    cin>>i;
  }
  sort(v.begin(),v.end(),[&](string a,string b)->bool{
    for(int i=0;i<(int)min(a.size(),b.size());++i){
      auto it=find(x.begin(),x.end(),a[i]),itt=find(x.begin(),x.end(),b[i]);
      if(it<itt){
        return true;
      }
      else if(it>itt){
        return false;
      }
    }
    return a.size()<b.size();
  });
  for(auto&i:v){
    cout<<i<<'\n';
  }
  return 0;
}
