#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  if (n <= 125)
    cout << 4 << endl;
  else if (n <= 211)
    cout << 6 << endl;
  else
    cout << 8 << endl;
  return 0;
}
