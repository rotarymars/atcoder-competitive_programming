#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a,b;
  cin>>a>>b;
  if(b%a==0)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
