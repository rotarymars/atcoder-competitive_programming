#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  long long n;
  io.read(n);
  io.write(n / 3 + n / 5 + n / 7 - n / 15 - n / 35 - n / 21 + n / 105, '\n');
  return 0;
}
