#include <iostream>
#include <numeric>
#include <queue>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, x;
  cin >> n >> x;
  vector<bool> ans(n, false);
  vector<int> v(n);
  for (int &i : v)
    cin >> i, i--;
  queue<int> que;
  que.push(--x);
  ans[x] = true;
  while (!que.empty()) {
    int tmp = que.front();
    que.pop();
    ans[tmp] = true;
    if (!ans[v[tmp]])
      que.push(v[tmp]);
  }
  cout << accumulate(ans.begin(), ans.end(), 0) << endl;
  return 0;
}
