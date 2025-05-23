#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  cout<<abs(a-c)+abs(b-d)+1<<endl;
  return 0;
}
