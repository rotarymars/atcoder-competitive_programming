#include <iostream>
#include <cmath>
using namespace std;
#define int long long
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a,v,b,w,t;
  cin>>a>>v>>b>>w>>t;
  if(v<w){
    cout<<"NO\n";
  }
  else if((v-w)*t>=abs(a-b)){
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
  }
  return 0;
}
