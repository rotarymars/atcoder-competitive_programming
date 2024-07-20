#include <algorithm>
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
#ifndef __ROTARYMARS__ISPALINDROME__
#define __ROTARYMARS__ISPALINDROME__
#include <string>
bool ISPALINDROME(std::string s) {
  for (int i = 0; i < s.size() / 2; i++) {
    if (s[i] == s[s.size() - 1 - i]) {
      continue;
    }
    return false;
  }
  return true;
}
#else
#endif
#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  int ans = 0;
  do {
    bool ok = true;
    for (int i = 0; i < s.size() - k + 1; i++) {
      if (ISPALINDROME(s.substr(i, k))) {
        ok = false;
        DP(s);
      }
    }
    ans += ok;
    // if(ok)DP(s);
  } while (next_permutation(s.begin(), s.end()));
  cout << ans << endl;
  return 0;
}
