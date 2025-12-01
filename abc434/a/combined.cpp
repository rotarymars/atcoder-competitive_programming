#include <iostream>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int w, b;
  cin >> w >> b;
  w *= 1000;
  cout << w / b + 1 << endl;
  return 0;
}