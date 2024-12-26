#include <iostream>
#include <string>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int ans=0,n;
  string s;
  cin>>n>>s;
  int temp=0;
  for(auto&i:s){
    if(i=='I')++temp;
    if(i=='D')--temp;
    ans=max(ans,temp);
  }
  cout<<ans<<endl;
  return 0;
}
