#include <iostream>
#include <vector>
using namespace std;

int countabove(vector<int> &v, int n) {
  int ret = 0;
  for (int &i : v)
    if (i >= n)
      ret++;
  return ret;
}
void incrementall(vector<int> &v) {
  for (int &i : v)
    i++;
  return;
}
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, t, p;
  cin >> n >> t >> p;
  vector<int> v(n);
  for (int &i : v)
    cin >> i;
  for (int i = 0; i < 100000; i++) {
    if (countabove(v, t) >= p) {
      cout << i << endl;
      return 0;
    }
    incrementall(v);
  }
  return 0;
}
