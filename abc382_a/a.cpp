#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string s;
  int n, d;
  cin >> n >> d >> s;
  cout << d + count(s.begin(), s.end(), '.') << endl;
  return 0;
}
