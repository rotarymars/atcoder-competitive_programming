#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n, a, b;
  string s;
  cin >> n >> a >> b >> s;
  for (int i = a; i <= n - b - 1; ++i) {
    cout << s[i];
  }
  cout << endl;
  return 0;
}