#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int &i : v)
    cin >> i;
  int diff = 0;
  for (int i = 1; i <= n; i++) {
    if (!(v[i - 1] == i))
      diff++;
  }
  cout << (diff == 2 || diff == 0 ? "YES" : "NO") << endl;
  return 0;
}
