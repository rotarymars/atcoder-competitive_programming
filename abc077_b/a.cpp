#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  long long n;
  cin >> n;
  long long ans = 0;
  while (ans * ans <= n)
    ans++;
  ans--;
  cout << ans * ans << endl;
  return 0;
}
