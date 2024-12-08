#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long n;
  cin>>n;
  long long ans=1;
  for(int i=1;i<=11;++i){
    ans*=n-i;
    ans/=i;
  }
  cout<<ans<<endl;
  return 0;
}
