#include <string>
#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n;
  string s;
  io.read(n, s);
  string result;
  result.reserve(n);
  if (n % 3 == 0) {
    bool ok = true;
    for (int i = 0; i < n; i += 3) {
      if (s[i] == 'J' && s[1 + i] == 'O' && s[2 + i] == 'I')
        continue;
      ok = false;
    }
    if (ok) {
      string res = "";
      for (int i = 0; i < n / 3; ++i) {
        res += "OI";
      }
      res += string(n / 3, 'J');
      io.write(res, '\n');
      return 0;
    }
  }
  for (char c : s) {
    result.push_back(c);
    int pos = (int)result.size() - 3;
    while (pos >= 0 && pos + 2 < (int)result.size()) {
      if (result[pos] == 'J' && result[pos + 1] == 'O' &&
          result[pos + 2] == 'I') {
        result[pos] = 'O';
        result[pos + 1] = 'I';
        result[pos + 2] = 'J';
        pos--;
      } else {
        break;
      }
    }
  }
  io.write(result, '\n');
  return 0;
}
