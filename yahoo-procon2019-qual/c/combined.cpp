#include <iostream>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  long long k, a, b;
  cin >> k >> a >> b;
  if (b - a <= 1) {
    cout << 1 + k << endl;
    return 0;
  }
  long long current_biscuit = 1;
  int money = 0;
  while (k--) {
    if (current_biscuit < a && money == 0) {
      ++current_biscuit;
    } else if (money != 1 && k != 0) {
      current_biscuit -= a;
      ++money;
    } else if (money == 1) {
      current_biscuit += b;
      --money;
    } else {
      ++current_biscuit;
    }
    // cout<<current_biscuit<<endl;
  }
  cout << current_biscuit << endl;
  return 0;
}