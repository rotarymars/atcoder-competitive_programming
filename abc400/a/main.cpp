#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a;
  cin>>a;
  if(400%a==0){
    cout<<400/a<<endl;
  }
  else{
    cout<<-1<<endl;
  }
  return 0;
}
