#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
// #define _DEBUG
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,q;
  cin>>n>>q;
  vector<int>v(n,-1),nest(n,1);
  iota(v.begin(),v.end(),0);
  int ans=0;
  while(q--){
    int mode;
    cin>>mode;
    if(mode==1){
      int p,h;
      cin>>p>>h;
      --p,--h;
      if(nest[v[p]]==2){
        --ans;
      }
      --nest[v[p]];
      v[p]=h;
      ++nest[h];
      if(nest[h]==2){
        ++ans;
      }
    }
    else {
      cout<<ans<<'\n';
    }
    #ifdef _DEBUG
    cout<<"!!!START"<<endl;
    for(auto&i:v){
      cout<<i<<' ';
    }
    cout<<endl;
    for(auto&i:nest){
      cout<<i<<' ';
    }
    cout<<endl;
    cout<<"!!!END"<<endl;
    #endif
  }
  return 0;
}
