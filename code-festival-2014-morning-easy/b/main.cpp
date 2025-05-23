#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  --n;
  n %= 40;
  if (n < 20)
    cout << n + 1 << endl;
  else
    cout << 21 - (n - 19) << endl;
  return 0;
}
