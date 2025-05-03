#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int cnt=0;
  for(int i=0;i<n;++i){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a+b+c+d+e<20){
      ++cnt;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
