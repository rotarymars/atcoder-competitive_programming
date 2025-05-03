#include <iostream>
#include <algorithm>
using namespace std;
int I(){
  int a;
  cin>>a;
  return a;
}
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  cout<<min({I(),I(),I(),I()})<<endl;
  return 0;
}
