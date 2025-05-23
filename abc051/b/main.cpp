#include <iostream>
// #define _DEBUG
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int k,s;
  cin>>k>>s;
  long long ans=0;
  for(int i=0;i<=k;i++){
    for(int j=0;j<=k;j++){
      if(s-i-j>=0&&s-i-j<=k
      )++ans;
    }
  }
  cout<<ans<<endl;
  return 0;
}
