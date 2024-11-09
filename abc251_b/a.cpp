#include <iostream>
#include <set>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, w;
  cin >> n >> w;
  vector<int> a(n);
  for (int& i : a) cin >> i;
  set<int> se;
  for (int i = 0; i < n; i++)
    if (a[i] <= w) se.insert(a[i]);
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      if (a[i] + a[j] <= w) se.insert(a[i] + a[j]);
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      for (int k = j + 1; k < n; k++)
        if (a[i] + a[j] + a[k] <= w) se.insert(a[i] + a[j] + a[k]);
  cout << se.size() << endl;
  return 0;
}
