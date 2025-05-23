#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,r;
  cin>>n>>r;
  for(int i=0;i<n;++i){
    int d,a;
    cin>>d>>a;
    if(d==1){
      if(1600<=r&&r<=2799)r+=a;
    }
    if(d==2){
      if(1200<=r&&r<=2399)r+=a;
    }
  }
  cout<<r<<endl;
  return 0;
}
