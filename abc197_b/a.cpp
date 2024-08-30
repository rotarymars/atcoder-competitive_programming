#include <iostream>
#include <string>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  --x, --y;
  vector<string> s(h);
  for (string &i : s)
    cin >> i;
  int cnt = -3;
  for (int i = x; i < h && s[i][y] != '#'; i++)
    cnt++;
  for (int i = x; i >= 0 && s[i][y] != '#'; i--)
    cnt++;
  for (int j = y; j < w && s[x][j] != '#'; j++)
    cnt++;
  for (int j = y; j >= 0 && s[x][j] != '#'; j--)
    cnt++;
  cout << cnt << endl;
  return 0;
}
