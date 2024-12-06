#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,d;
  string s;
  cin>>n>>d>>s;
  cout<<d+count(s.begin(),s.end(),'.')<<endl;
  return 0;
}
