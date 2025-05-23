#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long x;
  cin>>x;
  long long now=1;
  for(int i=1;true;++i){
    now*=(long long)i;
    if(now==x){
      cout<<i<<endl;
      return 0;
    }
  }
  return 0;
}
