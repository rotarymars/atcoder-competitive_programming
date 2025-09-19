#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n, r;
  cin >> n >> r;
  // --r;
  vector<int> v(n);
  for (auto &i : v)
    cin >> i;
  /* r    v[r-1],v[r]*/
  int left = 0, right = n - 1;
  while (left != n - 1) {
    if (v[left] == 1) {
      ++left;
    } else
      break;
  }
  while (right != 0) {
    if (v[right] == 1) {
      --right;
    } else
      break;
  }
  if (left >= right) {
    cout << 0 << endl;
    return 0;
  }
  cout << count(v.begin() + min(r, left), v.begin() + max(r - 1, right) + 1,
                1) +
              max(r - 1, right) - min(r, left) + 1
       << endl;
  return 0;
}