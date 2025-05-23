#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  long double ans = 0;
  int bef;
  cin >> bef;
  for (int i = 0; i < n - 1; i++) {
    int tmp;
    cin >> tmp;
    ans += tmp - bef;
    bef = tmp;
  }
  cout << fixed << setprecision(10) << ans / (long double)(n - 1) << endl;
  return 0;
}
