#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  if (n < 100)
    cout << 100 - n << endl;
  else if (n < 200)
    cout << 200 - n << endl;
  else if (n < 300)
    cout << 300 - n << endl;
  else
    cout << 400 - n << endl;
  return 0;
}
