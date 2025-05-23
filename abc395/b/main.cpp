#include <iostream>
#include <vector>
#include <string>
using namespace std;
// #define _DEBUG
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<string>v(n,string(n,'-'));
  char now='#';
  for(int i=0;i<(n+1)/2;++i){
    int jmax=n-2*i;
    #ifdef _DEBUG
    cout<<jmax<<endl;
    #endif
    for(int j=i;j<i+jmax;++j){
      v[i][j]=now;
      v[j][i]=now;
      v[j][n-1-i]=now;
      v[n-1-i][j]=now;
      #ifdef _DEBUG
      cout<<i<<' '<<j<<' '<<n-1-i<<' '<<n-1-j<<endl;
      #endif
    }
    if(now=='#'){
      now='.';
    }
    else{
      now='#';
    }
  }
  for(auto&i:v){
    cout<<i<<'\n';
  }
  return 0;
}
