#include <iostream>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,a,b;
  cin>>n>>a>>b;
  if((b-a)%2==0){
    cout<<(b-a)/2<<endl;
  }
  else{
    cout<<min(max(a-1,b-1),max(n-a,n-b))<<endl;
  }
  return 0;
}
