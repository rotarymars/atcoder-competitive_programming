#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
long long a, b;
string rev(string s) {
  reverse(s.begin(), s.end());
  return s;
}
long long f(long long x) {
  if (x == 1)
    return a;
  if (x == 2)
    return b;
  return stoll(rev(to_string(f(x - 1) + f(x - 2))));
}
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  cin >> a >> b;
  cout << f(10) << endl;
  return 0;
}