#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long n;
  cin>>n;
  for(int i=1;;++i){
    string s=to_string(i),ss=s+s;
    if(stoll(ss)<=n){
      continue;
    }
    cout<<--i<<endl;
    return 0;
  }
  return 0;
}
