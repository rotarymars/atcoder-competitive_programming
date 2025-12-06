#include <set>
#include <template/fastio.hpp>
using namespace std;
template <class T, class U> struct PAIR {
  T first;
  U second;
  bool operator<(const PAIR &p) const {
    if (overlapping(*this, p))
      return false;
    return this->second < p.first;
  }
  bool operator>=(const PAIR &p) const { return !(*this < p); }
  bool operator<=(const PAIR &p) const {
    if (overlapping(*this, p))
      return true;
    return *this < p;
  }
  bool operator>(const PAIR &p) const { return !(*this <= p); }
};
bool overlapping(const PAIR<int, int> &p, const PAIR<int, int> &q) {
  return p.first <= q.second && p.second >= q.first;
}
signed main() {
  FastIO io;
  int n, q;
  io.read(n, q);
  set<PAIR<int, int>> se;
  while (q--) {
    PAIR<int, int> t;
    io.read(t.first, t.second);
    auto first = se.lower_bound(t), second = se.upper_bound(t);
    // io.write("===DEBUG===\n");
    if (distance(first, second)) {
      // io.write("Detected distance\n");
      for (auto i = first; i != second; ++i) {
        n += i->second - i->first + 1;
        t.first = min(t.first, i->first);
        t.second = max(t.second, i->second);
      }
      se.erase(first, second);
      // io.write("Inserting ", t.first, ' ', t.second, '\n');
      se.insert(t);
      n -= t.second - t.first + 1;
    } else {
      // io.write("No distance\n");
      // io.write("Inserting ", t.first, ' ', t.second, '\n');
      se.insert(t);
      n -= t.second - t.first + 1;
    }
    // for (auto &i : se) {
    // io.write(i.first, ' ', i.second, '\n');
    // }
    // io.write("===DEUBG END===");
    io.write(n, '\n');
  }
  return 0;
}
