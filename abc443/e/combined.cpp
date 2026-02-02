#line 1 "/home/rotarymars/projects/personal/atcoder-competitive_programming/template/fastio.hpp"
#include <cctype>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <string>
#include <type_traits>
#include <vector>

struct FastIO {
  static constexpr size_t IN_BUF_SIZE = 1 << 20;
  static constexpr size_t OUT_BUF_SIZE = 1 << 20;

  FILE *in;
  char *inbuf;
  size_t in_idx, in_len;

  FILE *out;
  char *outbuf;
  size_t out_idx;

  FastIO(FILE *_in = stdin, FILE *_out = stdout)
      : in(_in), in_idx(0), in_len(0), out(_out), out_idx(0) {
    inbuf = new char[IN_BUF_SIZE];
    outbuf = new char[OUT_BUF_SIZE];
  }

  ~FastIO() {
    flush();
    delete[] inbuf;
    delete[] outbuf;
  }

  inline int gc() {
    if (in_idx >= in_len) {
      in_len = std::fread(inbuf, 1, IN_BUF_SIZE, in);
      in_idx = 0;
      if (in_len == 0)
        return EOF;
    }
    return static_cast<unsigned char>(inbuf[in_idx++]);
  }

  inline bool readCharRaw(char &c) {
    int x = gc();
    if (x == EOF)
      return false;
    c = static_cast<char>(x);
    return true;
  }

  inline bool skipSpaces(int &c) {
    do {
      c = gc();
      if (c == EOF)
        return false;
    } while (isspace(c));
    return true;
  }

  inline void pc(char c) {
    if (out_idx >= OUT_BUF_SIZE)
      flush();
    outbuf[out_idx++] = c;
  }

  inline void flush() {
    if (out_idx) {
      std::fwrite(outbuf, 1, out_idx, out);
      out_idx = 0;
    }
  }

  bool read(int &i) { return readInt(i); }

  bool read(long &l) { return readInt(l); }

  bool read(long long &i) { return readInt(i); }

  bool read(double &d) { return readDouble(d); }

  bool read(float &f) { return readDouble(f); }

  bool read(long double &ld) { return readDouble(ld); }

  bool read(char &c) { return readChar(c); }

  bool read(std::string &s) { return readString(s); }

  template <class T> bool read(std::vector<T> &v) { return readVec(v); }

  template <class T, class U> bool read(std::pair<T, U> &p) {
    return readPair(p);
  }

  template <class T> bool readInt(T &out) {
    int c;
    if (!skipSpaces(c))
      return false;
    T sign = 1;
    if (c == '-') {
      sign = -1;
      c = gc();
    }
    T val = 0;
    while ('0' <= c && c <= '9') {
      val = val * 10 + (c - '0');
      c = gc();
    }
    out = val * sign;
    return true;
  }

  template <class T> bool readDouble(T &out) {
    int c;
    if (!skipSpaces(c))
      return false;

    int sign = 1;
    if (c == '-') {
      sign = -1;
      c = gc();
    }

    uint64_t ip = 0;
    while ('0' <= c && c <= '9') {
      ip = ip * 10 + (c - '0');
      c = gc();
    }

    uint64_t fp = 0;
    int fd = 0;
    if (c == '.') {
      c = gc();
      while ('0' <= c && c <= '9') {
        if (fd < 18) {
          fp = fp * 10 + (c - '0');
          fd++;
        }
        c = gc();
      }
    }

    int expSign = 1, expVal = 0;
    if (c == 'e' || c == 'E') {
      c = gc();
      if (c == '+' || c == '-') {
        expSign = (c == '-') ? -1 : 1;
        c = gc();
      }
      while ('0' <= c && c <= '9') {
        expVal = expVal * 10 + (c - '0');
        c = gc();
      }
    }

    static const double pow10neg[] = {
        1.0,   1e-1,  1e-2,  1e-3,  1e-4,  1e-5,  1e-6,  1e-7,  1e-8, 1e-9,
        1e-10, 1e-11, 1e-12, 1e-13, 1e-14, 1e-15, 1e-16, 1e-17, 1e-18};

    double val = (double)ip;
    if (fd)
      val += (double)fp * pow10neg[fd];
    if (expVal)
      val *= std::pow(10.0, expSign * expVal);
    out = sign * val;
    return true;
  }

  bool readString(std::string &s) {
    int c;
    if (!skipSpaces(c))
      return false;
    s.clear();
    do {
      s.push_back(static_cast<char>(c));
      c = gc();
    } while (!isspace(c));
    return true;
  }

  bool readLine(std::string &s) {
    s.clear();
    char ch;
    if (!readCharRaw(ch))
      return false;
    while (ch == '\n' || ch == '\r') {
      if (!readCharRaw(ch))
        return false;
    }
    do {
      s.push_back(ch);
      if (!readCharRaw(ch))
        break;
    } while (ch != '\n' && ch != '\r');
    return true;
  }

  bool readChar(char &c) {
    int x;
    if (!skipSpaces(x))
      return false;
    c = static_cast<char>(x);
    return true;
  }

  template <class T> bool readVec(std::vector<T> &v) {
    for (T &x : v) {
      if (!read(x))
        return false;
    }
    return true;
  }

  template <class T, class U> bool readPair(std::pair<T, U> &p) {
    return read(p.first) && read(p.second);
  }

  void write(char c) { writeChar(c); }

  void write(int i) { writeInt(i); }

  void write(long l) { writeInt(l); }

  void write(long long i) { writeInt(i); }

  void write(double d) { writeDouble(d); }

  void write(float f) { writeDouble(f); }

  void write(long double ld) { writeDouble(ld); }

  void write(const std::string &s) { writeString(s); }

  void write(const std::string &&s) { writeString(s); }

  void write(const char *s) { writeString(s); }

  template <class T> void write(const std::vector<T> &v) { writeVec(v); }

  template <class T> void write(std::vector<T> &&v) { writeVec(v); }

  template <class T, class U> void write(const std::pair<T, U> &p) {
    writePair(p);
  }

  void writeChar(char c) { pc(c); }

  void writeString(const std::string &s, char end = '\0') {
    for (char c : s)
      pc(c);
    if (end)
      pc(end);
  }

  template <class T> void writeInt(T x, char end = '\0') {
    if (x == 0) {
      pc('0');
      if (end)
        pc(end);
      return;
    }
    if constexpr (std::is_signed<T>::value) {
      if (x < 0) {
        pc('-');
        unsigned long long ux =
            static_cast<unsigned long long>(-(x + 1)) + 1ull;
        writeUInt(ux, end);
        return;
      }
    }
    writeUInt(static_cast<unsigned long long>(x), end);
  }

  void writeUInt(unsigned long long x, char end = '\0') {
    char s[24];
    int n = 0;
    while (x) {
      s[n++] = char('0' + (x % 10));
      x /= 10;
    }
    while (n--)
      pc(s[n]);
    if (end)
      pc(end);
  }

  template <class T>
  void writeDouble(T x, int precision = 10, char end = '\0') {
    char tmp[128];
    int n = std::snprintf(tmp, sizeof(tmp), "%.*Lf", precision, x);
    for (int i = 0; i < n; ++i)
      pc(tmp[i]);
    if (end)
      pc(end);
  }

  void writeYesNo(bool b, char end = '\n') {
    if (b)
      writeString("Yes", end);
    else
      writeString("No", end);
  }

  template <class T> void writeVec(const std::vector<T> &v, char end = '\0') {
    for (auto it = v.begin(); it != v.end(); ++it) {
      write(*it);
      if (it != v.end() - 1)
        write(' ');
    }
    if (end)
      pc(end);
  }

  template <class T, class U>
  void writePair(const std::pair<T, U> &p, char end = '\0') {
    write(p.first);
    write(' ');
    write(p.second);
    if (end)
      pc(end);
  }

  template <typename T, typename U, typename... Args>
  void write(T &&first, U &&second, Args &&...rest) {
    write(std::forward<T>(first));
    write(std::forward<U>(second), std::forward<Args>(rest)...);
  }

  template <typename T, typename... Args>
  void writeln(T &&first, Args &&...rest) {
    write(std::forward<T>(first), std::forward<Args>(rest)..., '\n');
  }

  // Variadic read function
  template <typename... Args> bool read(Args &...args) {
    return (... && read(args));
  }
};
#line 2 "main.cpp"
#line 1 "/home/rotarymars/projects/personal/atcoder-competitive_programming/template/ac-library/atcoder/fenwicktree"
#line 1 "/home/rotarymars/projects/personal/atcoder-competitive_programming/template/ac-library/atcoder/fenwicktree.hpp"
#ifndef ATCODER_FENWICKTREE_HPP
#define ATCODER_FENWICKTREE_HPP 1

#include <cassert>
#include <vector>

#line 1 "/home/rotarymars/projects/personal/atcoder-competitive_programming/template/ac-library/atcoder/internal_type_traits"
#line 1 "/home/rotarymars/projects/personal/atcoder-competitive_programming/template/ac-library/atcoder/internal_type_traits.hpp"
#ifndef ATCODER_INTERNAL_TYPE_TRAITS_HPP
#define ATCODER_INTERNAL_TYPE_TRAITS_HPP 1

#include <cassert>
#include <numeric>
#include <type_traits>

namespace atcoder {

namespace internal {

#ifndef _MSC_VER
template <class T>
using is_signed_int128 =
    typename std::conditional<std::is_same<T, __int128_t>::value ||
                                  std::is_same<T, __int128>::value,
                              std::true_type, std::false_type>::type;

template <class T>
using is_unsigned_int128 =
    typename std::conditional<std::is_same<T, __uint128_t>::value ||
                                  std::is_same<T, unsigned __int128>::value,
                              std::true_type, std::false_type>::type;

template <class T>
using make_unsigned_int128 =
    typename std::conditional<std::is_same<T, __int128_t>::value, __uint128_t,
                              unsigned __int128>;

template <class T>
using is_integral =
    typename std::conditional<std::is_integral<T>::value ||
                                  is_signed_int128<T>::value ||
                                  is_unsigned_int128<T>::value,
                              std::true_type, std::false_type>::type;

template <class T>
using is_signed_int =
    typename std::conditional<(is_integral<T>::value &&
                               std::is_signed<T>::value) ||
                                  is_signed_int128<T>::value,
                              std::true_type, std::false_type>::type;

template <class T>
using is_unsigned_int =
    typename std::conditional<(is_integral<T>::value &&
                               std::is_unsigned<T>::value) ||
                                  is_unsigned_int128<T>::value,
                              std::true_type, std::false_type>::type;

template <class T>
using to_unsigned = typename std::conditional<
    is_signed_int128<T>::value, make_unsigned_int128<T>,
    typename std::conditional<std::is_signed<T>::value, std::make_unsigned<T>,
                              std::common_type<T>>::type>::type;

#else

template <class T> using is_integral = typename std::is_integral<T>;

template <class T>
using is_signed_int =
    typename std::conditional<is_integral<T>::value && std::is_signed<T>::value,
                              std::true_type, std::false_type>::type;

template <class T>
using is_unsigned_int =
    typename std::conditional<is_integral<T>::value &&
                                  std::is_unsigned<T>::value,
                              std::true_type, std::false_type>::type;

template <class T>
using to_unsigned =
    typename std::conditional<is_signed_int<T>::value, std::make_unsigned<T>,
                              std::common_type<T>>::type;

#endif

template <class T>
using is_signed_int_t = std::enable_if_t<is_signed_int<T>::value>;

template <class T>
using is_unsigned_int_t = std::enable_if_t<is_unsigned_int<T>::value>;

template <class T> using to_unsigned_t = typename to_unsigned<T>::type;

} // namespace internal

} // namespace atcoder

#endif // ATCODER_INTERNAL_TYPE_TRAITS_HPP

namespace atcoder {

// Reference: https://en.wikipedia.org/wiki/Fenwick_tree
template <class T> struct fenwick_tree {
  using U = internal::to_unsigned_t<T>;

public:
  fenwick_tree() : _n(0) {}
  explicit fenwick_tree(int n) : _n(n), data(n) {}

  void add(int p, T x) {
    assert(0 <= p && p < _n);
    p++;
    while (p <= _n) {
      data[p - 1] += U(x);
      p += p & -p;
    }
  }

  T sum(int l, int r) {
    assert(0 <= l && l <= r && r <= _n);
    return sum(r) - sum(l);
  }

private:
  int _n;
  std::vector<U> data;

  U sum(int r) {
    U s = 0;
    while (r > 0) {
      s += data[r - 1];
      r -= r & -r;
    }
    return s;
  }
};

} // namespace atcoder

#endif // ATCODER_FENWICKTREE_HPP
#line 3 "main.cpp"
#include <queue>
#include <utility>
using namespace std;
#define _DEBUG 0
FastIO io;
int dh[] = {-1, -1, -1}, dw[] = {-1, 0, 1};
void solve() {
  int n, c;
  io.read(n, c);
  --c;
  vector<atcoder::fenwick_tree<int>> fw(n, atcoder::fenwick_tree<int>(n));
  vector<vector<char>> v(n, vector<char>(n));
  vector<vector<bool>> visited(n, vector<bool>(n, false));
  io.read(v);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (v[j][i] == '#') {
        fw[i].add(j, 1);
      }
    }
  }
  queue<pair<int, int>> q;
  q.push({n - 1, c});
  // visited[n-1][c]=true;
  while (!q.empty()) {
    pair<int, int> current = q.front();
    q.pop();
    if (visited[current.first][current.second])
      continue;
    visited[current.first][current.second] = true;
    for (int i = 0; i < sizeof(dh) / sizeof(int); ++i) {
      int nh = current.first + dh[i];
      int nw = current.second + dw[i];
      if (nh < 0 || nh >= n || nw < 0 || nw >= n)
        continue;
      if (visited[nh][nw])
        continue;
      if (v[nh][nw] == '.') {
        q.push({nh, nw});
      } else {
        int cnt = fw[nw].sum(nh + 1, n);
        if (cnt == 0) {
          q.push({nh, nw});
          v[nh][nw] = '.';
          fw[nw].add(nh, -1);
        }
      }
    }
  }
#if _DEBUG
  io.write("visited:\n");
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      io.write(visited[i][j] ? '1' : '0');
    }
    io.writeln("");
  }
  io.writeln("");
#endif
  for (int i = 0; i < n; ++i) {
    io.write(visited[0][i] ? '1' : '0');
  }
  io.writeln("");
}
signed main() {
  int t;
  io.read(t);
  while (t--) {
    solve();
  }
  return 0;
}