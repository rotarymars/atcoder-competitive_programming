#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,q;
  cin>>n>>q;
  vector<bool>v(n,false);
  int places=0;
  for(int i=0;i<q;++i){
    int a;
    cin>>a;
    --a;
    bool left,right;
    left=right=false;
    if(a>0){
      if(v[a-1]){
        left=true;
      }
    }
    if(a<n-1){
      if(v[a+1]){
        right=true;
      }
    }
    if(!v[a]){
      if(left&&right){
        --places;
      }
      else if(left^right){
      }
      else if(!left&&!right){
        ++places;
      }
      else abort();
    }
    else {
      if(left&&right){
        ++places;
      }
      else if(left^right){
      }
      else if(!left&&!right){
        --places;
      }
      else abort();
    }
    v[a]=!v[a];
    cout<<places<<'\n';
  }
  return 0;
}
