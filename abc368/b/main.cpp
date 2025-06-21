#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool check(vector<int>&a){
  int num=0;
  for(int i=0;i<(int)a.size();++i){
    if(a[i]>0)++num;
  }
  return num>1;
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;++i){
    cin>>a[i];
  }
  int ans=0;
  while(check(a)){
    ++ans;
    sort(a.begin(),a.end(),greater<int>());
    --a[0],--a[1];
  }
  cout<<ans<<endl;
  return 0;
}
