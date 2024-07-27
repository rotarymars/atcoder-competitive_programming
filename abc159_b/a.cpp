#include <iostream>
#include <string>
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
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string s;
  cin >> s;
  if (ISPALINDROME(s) && ISPALINDROME(s.substr(0, s.size() / 2)) &&
      ISPALINDROME(s.substr(s.size() / 2 + 1, s.size() / 2)))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
