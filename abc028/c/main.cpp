#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a[5];
  for (int i = 0; i < 5; i++)
    cin >> a[i];
  vector<int> v;
  for (int i = 0; i < 5; i++)
    for (int j = i + 1; j < 5; ++j)
      for (int k = j + 1; k < 5; ++k) {
        v.push_back(a[i] + a[j] + a[k]);
      }
  sort(v.begin(), v.end(), greater<int>());
  cout << v[2] << endl;
  return 0;
}
