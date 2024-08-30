#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  vector<int> v(4);
  for (int i = 0; i < 3; i++) {
    int a, b;
    cin >> a >> b;
    v[--a]++, v[--b]++;
  }
  if (v[0] <= 2 && v[1] <= 2 && v[2] <= 2 && v[3] <= 2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
