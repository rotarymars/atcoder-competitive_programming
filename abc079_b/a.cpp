#include <iostream>
#include <map>
using namespace std;
map<int, long long> mp;
long long f(int n) {
  if (n == 0) return 2;
  if (n == 1) return 1;
  if (mp.contains(n - 1))
    ;
  else
    mp[n - 1] = f(n - 1);
  if (mp.contains(n - 2))
    ;
  else
    mp[n - 2] = f(n - 2);
  return mp[n - 1] + mp[n - 2];
}
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  mp[0] = 2;
  mp[1] = 1;
  cout << f(n) << endl;
  return 0;
}
