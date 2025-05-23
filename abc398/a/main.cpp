#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  if(n%2==0){
    cout<<string(n/2-1,'-')<<"=="<<string(n/2-1,'-')<<endl;
  }
  else{
    cout<<string(n/2,'-')<<'='<<string(n/2,'-')<<endl;
  }
  return 0;
}
