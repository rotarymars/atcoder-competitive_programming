#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  string s;
  cin >> s;
  for (char &i : s)
    i += n;
  for (int i = 0; i < s.size(); i++)
    if (s[i] > 'Z')
      s[i] -= 'Z' - 'A' + 1;
  cout << s << endl;
  return 0;
}
