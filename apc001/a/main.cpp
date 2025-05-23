#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int x,y;
  cin>>x>>y;
  if(x%y==0){
    cout<<-1<<endl;
  }
  else{
    cout<<x<<endl;
  }
  return 0;
}
