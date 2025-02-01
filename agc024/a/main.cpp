#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long a,b,c,k;
  cin>>a>>b>>c>>k;
  if(k%2==0){
    cout<<a-b<<endl;
  }
  else{
    cout<<b-a<<endl;
  }
  return 0;
}
