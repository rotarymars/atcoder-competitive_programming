#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto&i:v)cin>>i;
  vector vcp=v;
  sort(v.begin(),v.end());
  v.erase(unique(v.begin(),v.end()),v.end());
  for(int i=0;i<n;++i){
    auto it=lower_bound(v.begin(),v.end(),vcp[i]);
    cout<<(i==0?"":" ")<<distance(v.begin(),it)+1;
  }
  cout<<endl;
  return 0;
}
