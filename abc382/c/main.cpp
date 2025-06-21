#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  int T=200010;
  vector<int>v(T,-1);
  for(int i=0;i<n;++i){
    int a;
    cin>>a;
    while(T>a){
      T--;
      v[T]=1+i;
    }
  }
  for(int i=0;i<m;++i){
    int x;
    cin>>x;
    cout<<v[x]<<'\n';
  }
  return 0;
}
