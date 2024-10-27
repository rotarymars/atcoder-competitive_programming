#include <iostream>
#include <string>
using namespace std;
bool group(string s) { return s == "R G B" || s == "G B R" || s == "B R G"; }

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string s, t;
  getline(cin, s);
  getline(cin, t);
  cout << (group(s) == group(t) ? "Yes" : "No") << endl;
  return 0;
}
