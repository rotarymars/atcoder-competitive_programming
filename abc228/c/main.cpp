#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,k;
  cin>>n>>k;
  vector<int>v(n);
  for(int i=0;i<n;++i){
    int a,b,c;
    cin>>a>>b>>c;
    v[i]=a+b+c;
  }
  vector vcp=v;
  sort(vcp.begin(),vcp.end(),greater<>());
  for(auto&i:v){
    cout<<(i+300>=vcp[k-1]?"Yes":"No")<<endl;
  }
  return 0;
}
