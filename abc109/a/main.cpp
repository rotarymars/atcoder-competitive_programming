#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a,b;
  cin>>a>>b;
  if((a&b)&1)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
