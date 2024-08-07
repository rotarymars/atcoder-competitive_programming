#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
#define mod 998244353
#define PII pair<int, int>
#define PIII pair<int, PII>
#define INF 0x3f3f3f3f
#define double long double
#define endl '\n'

using namespace std;

const int N = 1e6 + 10, M = 32, SZ = (N) << 2;
int a[10][10];
map<int, pair<int, int>> hm;

void solve() {
  for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
      int x;
      cin >> x;
      hm[x] = {i, j};
    }
  }
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    auto [u, v] = hm[x];
    a[u][v] = 1;
  }
  int f = 0;
  for (int i = 1; i <= 3; i++) {
    int s = 0;
    for (int j = 1; j <= 3; j++) {
      s += a[i][j];
    }
    if (s >= 3)
      f = 1;
  }
  for (int i = 1; i <= 3; i++) {
    int s = 0;
    for (int j = 1; j <= 3; j++) {
      s += a[j][i];
    }
    if (s >= 3)
      f = 1;
  }
  if (a[1][1] + a[2][2] + a[3][3] == 3) {
    f = 1;
  }
  if (a[3][1] + a[2][2] + a[1][3] == 3) {
    f = 1;
  }
  if (f) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
}
int32_t main() {
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int T = 1;
  //	cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}
