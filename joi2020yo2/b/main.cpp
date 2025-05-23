#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int ans=0;
  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    ans=max(ans,max(a,b)+a);
  }
  cout<<ans<<endl;
  return 0;
}
