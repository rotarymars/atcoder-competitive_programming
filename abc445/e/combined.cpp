#line 1 "/home/rotarymars/projects/personal/atcoder-competitive_programming/template/fastio.hpp"
#include <cctype>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <string>
#include <type_traits>
#include <utility>
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

  // ── Read overloads ──

  bool read(int &i) { return readInt(i); }

  bool read(long &l) { return readInt(l); }

  bool read(long long &i) { return readInt(i); }

  bool read(unsigned int &i) { return readInt(i); }

  bool read(unsigned long &l) { return readInt(l); }

  bool read(unsigned long long &i) { return readInt(i); }

  bool read(double &d) { return readDouble(d); }

  bool read(float &f) { return readDouble(f); }

  bool read(long double &ld) { return readDouble(ld); }

  bool read(char &c) { return readChar(c); }

  bool read(std::string &s) { return readString(s); }

  template <class T> bool read(std::vector<T> &v) { return readVec(v); }

  template <class T, class U> bool read(std::pair<T, U> &p) {
    return readPair(p);
  }

  template <typename T1, typename T2, typename... Rest>
  bool read(T1 &first, T2 &second, Rest &...rest) {
    return read(first) && read(second, rest...);
  }

  template <class T> bool readInt(T &out) {
    int c;
    if (!skipSpaces(c))
      return false;
    bool neg = false;
    if (c == '-') {
      neg = true;
      c = gc();
    }
    T val = 0;
    while ('0' <= c && c <= '9') {
      val = val * 10 + (c - '0');
      c = gc();
    }
    if constexpr (std::is_signed<T>::value) {
      out = neg ? -val : val;
    } else {
      out = val;
    }
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

  // ── Single-argument write overloads (non-template, exact match) ──

  void write(char c) { writeChar(c); }

  void write(bool b) { pc(b ? '1' : '0'); }

  void write(int i) { writeInt(i); }

  void write(long l) { writeInt(l); }

  void write(long long i) { writeInt(i); }

  void write(unsigned int i) { writeInt(i); }

  void write(unsigned long l) { writeInt(l); }

  void write(unsigned long long i) { writeInt(i); }

  void write(double d) { writeDouble(d); }

  void write(float f) { writeDouble(f); }

  void write(long double ld) { writeDouble(ld); }

  void write(const std::string &s) {
    for (char c : s)
      pc(c);
  }

  void write(const char *s) {
    while (*s)
      pc(*s++);
  }

  template <class T> void write(const std::vector<T> &v) { writeVec(v); }

  template <class T, class U> void write(const std::pair<T, U> &p) {
    writePair(p);
  }

  // ── Variadic write: two or more arguments ──

  template <typename T1, typename T2, typename... Rest>
  void write(const T1 &first, const T2 &second, const Rest &...rest) {
    write(first);
    write(second);
    (write(rest), ...);
  }

  template <typename... Args> void writeln(const Args &...args) {
    write(args...);
    pc('\n');
  }

  // ── Underlying write helpers ──

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
    int n = std::snprintf(tmp, sizeof(tmp), "%.*Lf", precision,
                          static_cast<long double>(x));
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
};
#line 2 "main.cpp"
#include <map>
#include <utility>
#ifndef __ROTARYMARS__PRIME_FACTORIZE__
#define __ROTARYMARS__PRIME_FACTORIZE__
#include <algorithm>
#include <utility>
#include <vector>
template <class T> std::vector<std::pair<T, T>> PRIME_FACTORIZE(T n) {
  std::vector<std::pair<T, T>> result;
  for (T i = 2; i * i <= n; i++) {
    if (n % i != 0) {
      continue;
    }
    T ex = 0;
    while (n % i == 0) {
      ++ex;
      n /= i;
    }
    result.push_back({i, ex});
  }
  if (n != 1) {
    result.push_back({n, 1});
  }
  sort(result.begin(), result.end());
  return result;
}
#else
#endif

#ifndef __ROTARYMARS__INVERSE_ELEMENT__
#define __ROTARYMARS__INVERSE_ELEMENT__ 1
#include <cstdlib>
#ifndef __ROTARYMARS__POWMOD__
#define __ROTARYMARS__POWMOD__
template <class T> T POWMOD(T a, T b, T c) {
  T ans = 1;
  a %= c;
  while (b != 0) {
    if (b & 1) {
      ans *= a;
    }
    a *= a;
    b >>= 1;
    a %= c;
    ans %= c;
  }
  return ans;
}
#else
#endif

template <class T> T inverse_element(T x, T mod) {
  return POWMOD(x, mod - 2, mod);
}
#else
#endif

using namespace std;
FastIO io;
#define int long long
struct Info {
  int mx1, cnt, mx2;
};
void solve() {
  int n;
  io.read(n);
  vector<long long> v(n);
  io.read(v);
  map<int, Info> mp;
  vector<int> ans;
  vector<vector<pair<long long, long long>>> facres(n);
  constexpr int mod = 998244353;
  for (int i = 0; i < n; ++i) {
    auto pf = PRIME_FACTORIZE(v[i]);
    facres[i] = pf;
    for (const auto &[fac, p] : pf) {
      if (!mp.count(fac)) {
        mp[fac] = {p, 1, 0};
      } else {
        auto &info = mp[fac];
        if (p > info.mx1) {
          info.mx2 = info.mx1;
          info.mx1 = p;
          info.cnt = 1;
        } else if (p == info.mx1) {
          info.cnt++;
        } else if (p > info.mx2) {
          info.mx2 = p;
        }
      }
    }
  }
  long long lcm = 1;
  for (const auto &[fac, info] : mp) {
    lcm = lcm * POWMOD(fac, info.mx1, mod) % mod;
  }
  for (int i = 0; i < n; ++i) {
    auto &pf = facres[i];
    long long div = 1;
    for (const auto &[fac, p] : pf) {
      auto &info = mp[fac];
      if (p == info.mx1 && info.cnt == 1) {
        int diff = p - info.mx2;
        div = div * POWMOD(fac, diff, mod) % mod;
      }
    }
    ans.push_back(lcm * inverse_element(div, mod) % mod);
  }
  io.writeln(ans);
}
signed main() {
  int t;
  io.read(t);
  while (t--)
    solve();
  return 0;
}