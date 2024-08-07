#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  cout << 2 * n << '\n';
  string s;
  while (n) {
    s += (char)(min(4, n) + 48);
    n -= min(4, n);
  }
  reverse(s.begin(), s.end());
  cout << s << endl;
  ;
}
