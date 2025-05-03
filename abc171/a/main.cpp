#include <iostream>
#include <cctype>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  char c;
  cin>>c;
  if(isupper(c))cout<<'A'<<endl;
  else cout<<'a'<<endl;
  return 0;
}
