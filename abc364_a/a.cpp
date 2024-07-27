#include <iostream>
#ifndef __ROTARYMARS__DEBUGPRINT__
#define __ROTARYMARS__DEBUGPRINT__
#include <iostream>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
#else
#endif
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  string before = "";
  for (; n; n--) {
    string tmp;
    cin >> tmp;
    if (tmp == "sweet" && before == "sweet" && n != 1) {
      cout << "No" << endl;
      return 0;
    }
    before = tmp;
    DP(tmp);
    DP(before);
  }
  cout << "Yes" << endl;
  return 0;
}
