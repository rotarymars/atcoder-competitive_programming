#include <bits/stdc++.h>
using namespace std;
int main() {
  long n;
  cin >> n;
  n--;
  long cnt = 1;
  for (int i = 0; i < 5; i++) {
    cnt *= 10;
  }
  string ans = "";
  for (int i = 0; i < 9; i++) {
    if (i == 0) {
      ans += '1' + n / cnt;
      n %= cnt;
      cnt /= 10;
      continue;
    }
    if (i == 1) {
      ans += ans[0];
      continue;
    }
    if (i == 5) {
      ans += ans[4];
      continue;
    }
    if (i == 8) {
      ans += ans[6];
      continue;
    }
    ans += '0' + n / cnt;
    n %= cnt;
    cnt /= 10;
  }
  cout << ans << endl;
}
