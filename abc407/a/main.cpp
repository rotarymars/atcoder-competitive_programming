#include <iostream>
#include <cmath>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long double a,b;
  cin>>a>>b;
  long double tmp=a/b;
  if(tmp-floor(tmp)>ceil(tmp)-tmp){
    cout<<ceil(tmp)<<endl;
  }else{
    cout<<floor(tmp)<<endl;
  }
  return 0;
}
