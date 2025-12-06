#include <queue>
#include <set>
#include <template/fastio.hpp>
#include <vector>
using namespace std;
signed main() {
  FastIO io;
  int n, m;
  io.read(n, m);
  vector<vector<int>> edges(n);
  vector<vector<int>> reversed(n);
  for (int i = 0; i < m; ++i) {
    int x, y;
    io.read(x, y);
    --x, --y;
    edges[x].push_back(y);
    reversed[y].push_back(x);
  }
  set<int> black;
  int q;
  io.read(q);
  while (q--) {
    int t, v;
    io.read(t, v);
    if (t == 1) {
      --v;
      queue<int> que;
      que.push(v);
      while (!que.empty()) {
        int current = que.front();
        que.pop();
        if (black.contains(current))
          continue;
        black.insert(current);
        for (auto &i : reversed[current]) {
          que.push(i);
        }
      }
    } else {
      io.writeYesNo(black.contains(--v));
    }
  }
  return 0;
}
