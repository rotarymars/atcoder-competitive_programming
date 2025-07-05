#include <iostream>
#include <cmath>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long double txa,tya,txb,tyb,t,v;
  cin>>txa>>tya>>txb>>tyb>>t>>v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    long double x,y;
    cin>>x>>y;
    long double dist1 = sqrt((x-txa)*(x-txa)+(y-tya)*(y-tya));
    long double dist2 = sqrt((x-txb)*(x-txb)+(y-tyb)*(y-tyb));
    long double dist = dist1+dist2;
    if(dist<=t*v){
      cout<<"YES"<<endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;
  return 0;
}