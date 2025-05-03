#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int x;
  cin>>x;
  int ans=0;
  for(int i=1;i<10;++i){
    for(int j=1;j<10;++j){
      if(i*j!=x){
        ans+=i*j;
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
