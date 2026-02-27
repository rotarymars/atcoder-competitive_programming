#ifndef MYSELF
#define MYSELF
#include __FILE__
#include <vector>
// #include <fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n, m;
  io.read(n, m);
  set<int> drunk;
  vector<vector<int>> list(n, vector<int>());
  for (int i = 0; i < n; ++i) {
    int l;
    io.read(l);
    for (int j = 0; j < l; ++j) {
      int x;
      io.read(x);
      list[i].push_back(x);
    }
  }
  for (int i = 0; i < n; ++i) {
    bool flag = false;
    for (int j = 0; j < list[i].size(); ++j) {
      if (!drunk.contains(list[i][j])) {
        flag = true;
        io.writeln(list[i][j]);
        drunk.insert(list[i][j]);
        break;
      }
    }
    if (!flag) {
      io.writeln(0);
    }
  }
  return 0;
}

#else
#ifndef __ROTARYMARS__ARYSYSTEM__
#define __ROTARYMARS__ARYSYSTEM__
#include <algorithm>
#include <vector>
template <class T> T KTOTEN(int a, int k) {
  int ret = 0;
  int now = 1;
  while (a > 0) {
    ret += (a % 10) * now;
    a /= 10;
    now *= k;
  }
  return ret;
}

std::vector<int> TENTOK(long long n, long long k) {
  std::vector<int> ret;
  if (n == 0) {
    return std::vector<int>(1, 0);
  }
  while (n > 0) {
    ret.push_back(n % k);
    n /= k;
  }
  reverse(ret.begin(), ret.end());
  return ret;
}
#else
#endif
#ifndef __ROTARYMARS__COMBINATIONS__
#define __ROTARYMARS__COMBINATIONS__
template <class T> T COMBINATIONS(T a, T b) {
  T ret = 1;
  for (T i = 1; i <= b; ++i) {
    ret *= a + 1 - i;
    ret /= i;
  }
  return ret;
}
#endif
#ifndef __ROTARYMARS__DEBUGPRINT__
#define __ROTARYMARS__DEBUGPRINT__
#include <iostream>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x)
#endif
#else
#endif
#ifndef __ROTARYMARS__EDIT_DISTANCE__
#define __ROTARYMARS__EDIT_DISTANCE__
#include <algorithm>
#include <string>
#include <vector>
int editDistance(const std::string &A, const std::string &B) {
  int n = A.size(), m = B.size();
  std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1, 0));
  for (int i = 0; i <= n; ++i)
    dp[i][0] = i;
  for (int j = 0; j <= m; ++j)
    dp[0][j] = j;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      if (A[i - 1] == B[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1];
      } else {
        dp[i][j] = std::min(
            {dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1] + 1});
      }
    }
  }

  return dp[n][m];
}
#endif
#ifndef __ROTARYMARS__ENUM_DIVISORS__
#define __ROTARYMARS__ENUM_DIVISORS__
#include <algorithm>
#include <vector>
using namespace std;
template <class T> vector<T> ENUM_DIVISORS(T n) {
  vector<T> result;
  for (T i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      result.push_back(i);
      if (n / i != i) {
        result.push_back(n / i);
      }
    }
  }
  sort(result.begin(), result.end());
  return result;
}
#else
#endif
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
#ifndef __ROTARYMARS__GCD_LCM__
#define __ROTARYMARS__GCD_LCM__ 1
#include <algorithm>
template <class T> T GCD(T a, T b) {
  while (a && b) {
    if (a >= b) {
      a %= b;
    } else {
      b %= a;
    }
  }
  return std::max(a, b);
}
template <class T> T LCM(T a, T b) { return a / GCD(a, b) * b; }
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
#ifndef __ROTARYMARS__IOUTILITY__
#define __ROTARYMARS__IOUTILITY__
#include <iostream>
#include <set>
#include <vector>
template <class T, class U>
std::istream &operator>>(std::istream &is, std::pair<T, U> &p) {
  is >> p.first >> p.second;
  return is;
}
template <class T, class U>
std::ostream &operator<<(std::ostream &os, const std::pair<T, U> &p) {
  os << p.first << " " << p.second;
  return os;
}

template <class T>
std::istream &operator>>(std::istream &is, std::vector<T> &v) {
  for (T &x : v)
    is >> x;
  return is;
}
template <class T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &v) {
  for (typename std::vector<T>::const_iterator it = v.begin(); it != v.end();
       ++it) {
    os << *it;
    if (it != v.end() - 1) {
      os << " ";
    }
  }
  return os;
}
inline std::istream &operator>>(std::istream &in, __int128 &val) {
  std::string str;
  in >> str;
  val = 0;
  for (char c : str) {
    val = val * 10 + (c - '0');
  }
  return in;
}

inline std::ostream &operator<<(std::ostream &out, __int128 val) {
  if (val == 0) {
    out << '0';
  } else {
    if (val < 0) {
      out << '-';
      val = -val;
    }
    std::string str;
    while (val > 0) {
      str += '0' + (val % 10);
      val /= 10;
    }
    for (auto it = str.rbegin(); it != str.rend(); ++it) {
      out << *it;
    }
  }
  return out;
}

template <class T> std::istream &operator>>(std::istream &is, std::set<T> &s) {
  T x;
  is >> x;
  s.insert(x);
  return is;
}
template <class T>
std::ostream &operator<<(std::ostream &os, const std::set<T> &s) {
  for (class std::set<T>::const_iterator it = s.begin(); it != s.end(); ++it) {
    os << *it;
    if (it != s.end() - 1) {
      os << " ";
    }
  }
  return os;
}
template <class T>
std::istream &operator>>(std::istream &is, std::multiset<T> &s) {
  T x;
  is >> x;
  s.insert(x);
  return is;
}
template <class T>
std::ostream &operator<<(std::ostream &os, const std::multiset<T> &s) {
  for (class std::multiset<T>::const_iterator it = s.begin(); it != s.end();
       ++it) {
    os << *it;
    if (it != s.end() - 1) {
      os << " ";
    }
  }
  return os;
}
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
#ifndef __ROTARYMARS__ISPRIME
#define __ROTARYMARS__ISPRIME 1
template <class T> bool ISPRIME(const T a) {
  if (a <= 1) {
    return false;
  }
  for (T i = 2; i * i <= a; i++) {
    if (a % i == 0) {
      return false;
    }
  }
  return true;
}
#else
#endif
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
#ifndef __ROTARYMARS__RUD__
#define __ROTARYMARS__RUD__
template <class T> T RUD(T a, T b) { return ((a + b - (T)1) / b); }
#else
#endif
#ifndef __ROTARYMARS__SHA256__
#define __ROTARYMARS__SHA256__
#include <cstring>
#include <iostream>
class hash_functions {
protected:
  typedef unsigned char register_8;
  typedef unsigned int register_32;
  typedef unsigned long long register_64;

  const static register_32 hash_keys[];
  static const unsigned int BLOCK_SIZE_of_256 = (512 / 8);

public:
  void stateregister();
  void adjust_digest(const unsigned char *text, unsigned int text_len);
  void digest_final(unsigned char *digest);
  static const unsigned int PADD_SIZE = (256 / 8);

protected:
  void compress(const unsigned char *message, unsigned int block_nb);
  unsigned int s_r_totlen;
  unsigned int s_r_len;
  unsigned char s_r_block[2 * BLOCK_SIZE_of_256];
  register_32 s_r[8];
};

std::string sha256(std::string input);

const unsigned int hash_functions::hash_keys[64] = {
    0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1,
    0x923f82a4, 0xab1c5ed5, 0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3,
    0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174, 0xe49b69c1, 0xefbe4786,
    0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
    0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147,
    0x06ca6351, 0x14292967, 0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13,
    0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85, 0xa2bfe8a1, 0xa81a664b,
    0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
    0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a,
    0x5b9cca4f, 0x682e6ff3, 0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208,
    0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2};

void hash_functions::compress(const unsigned char *message,
                              unsigned int block_nb) {
  register_32 w[64];
  register_32 buffer[8];
  register_32 t1, t2;
  const unsigned char *sub_block;
  int m;
  int n;
  for (m = 0; m < (int)block_nb; m++) {
    sub_block = message + (m << 6);
    for (n = 0; n < 16; n++) {
      {
        *(&w[n]) = ((register_32) * ((&sub_block[n << 2]) + 3)) |
                   ((register_32) * ((&sub_block[n << 2]) + 2) << 8) |
                   ((register_32) * ((&sub_block[n << 2]) + 1) << 16) |
                   ((register_32) * ((&sub_block[n << 2]) + 0) << 24);
      };
    }
    for (n = 16; n < 64; n++) {
      w[n] =
          (((w[n - 2] >> 17) | (w[n - 2] << ((sizeof(w[n - 2]) << 3) - 17))) ^
           ((w[n - 2] >> 19) | (w[n - 2] << ((sizeof(w[n - 2]) << 3) - 19))) ^
           (w[n - 2] >> 10)) +
          w[n - 7] +
          (((w[n - 15] >> 7) | (w[n - 15] << ((sizeof(w[n - 15]) << 3) - 7))) ^
           ((w[n - 15] >> 18) |
            (w[n - 15] << ((sizeof(w[n - 15]) << 3) - 18))) ^
           (w[n - 15] >> 3)) +
          w[n - 16];
    }
    for (n = 0; n < 8; n++) {
      buffer[n] = s_r[n];
    }
    for (n = 0; n < 64; n++) {
      t1 = buffer[7] +
           (((buffer[4] >> 6) | (buffer[4] << ((sizeof(buffer[4]) << 3) - 6))) ^
            ((buffer[4] >> 11) |
             (buffer[4] << ((sizeof(buffer[4]) << 3) - 11))) ^
            ((buffer[4] >> 25) |
             (buffer[4] << ((sizeof(buffer[4]) << 3) - 25)))) +
           ((buffer[4] & buffer[5]) ^ (~buffer[4] & buffer[6])) + hash_keys[n] +
           w[n];
      t2 = (((buffer[0] >> 2) | (buffer[0] << ((sizeof(buffer[0]) << 3) - 2))) ^
            ((buffer[0] >> 13) |
             (buffer[0] << ((sizeof(buffer[0]) << 3) - 13))) ^
            ((buffer[0] >> 22) |
             (buffer[0] << ((sizeof(buffer[0]) << 3) - 22)))) +
           ((buffer[0] & buffer[1]) ^ (buffer[0] & buffer[2]) ^
            (buffer[1] & buffer[2]));
      buffer[7] = buffer[6];
      buffer[6] = buffer[5];
      buffer[5] = buffer[4];
      buffer[4] = buffer[3] + t1;
      buffer[3] = buffer[2];
      buffer[2] = buffer[1];
      buffer[1] = buffer[0];
      buffer[0] = t1 + t2;
    }
    for (n = 0; n < 8; n++) {
      s_r[n] += buffer[n];
    }
  }
}

void hash_functions::stateregister() {
  s_r[0] = 0x6a09e667;
  s_r[1] = 0xbb67ae85;
  s_r[2] = 0x3c6ef372;
  s_r[3] = 0xa54ff53a;
  s_r[4] = 0x510e527f;
  s_r[5] = 0x9b05688c;
  s_r[6] = 0x1f83d9ab;
  s_r[7] = 0x5be0cd19;
  s_r_len = 0;
  s_r_totlen = 0;
}

void hash_functions::adjust_digest(const unsigned char *text,
                                   unsigned int text_len) {
  unsigned int block_nb;
  unsigned int new_len, rem_len, tmp_len;
  const unsigned char *shifted_message;
  tmp_len = BLOCK_SIZE_of_256 - s_r_len;
  rem_len = text_len < tmp_len ? text_len : tmp_len;
  memcpy(&s_r_block[s_r_len], text, rem_len);
  if (s_r_len + text_len < BLOCK_SIZE_of_256) {
    s_r_len += text_len;
    return;
  }
  new_len = text_len - rem_len;
  block_nb = new_len / BLOCK_SIZE_of_256;
  shifted_message = text + rem_len;
  compress(s_r_block, 1);
  compress(shifted_message, block_nb);
  rem_len = new_len % BLOCK_SIZE_of_256;
  memcpy(s_r_block, &shifted_message[block_nb << 6], rem_len);
  s_r_len = rem_len;
  s_r_totlen += (block_nb + 1) << 6;
}

void hash_functions::digest_final(unsigned char *digest) {
  unsigned int block_nb;
  unsigned int pm_len;
  unsigned int len_b;
  int i;
  block_nb = (1 + ((BLOCK_SIZE_of_256 - 9) < (s_r_len % BLOCK_SIZE_of_256)));
  len_b = (s_r_totlen + s_r_len) << 3;
  pm_len = block_nb << 6;
  memset(s_r_block + s_r_len, 0, pm_len - s_r_len);
  s_r_block[s_r_len] = 0x80;
  {
    *((s_r_block + pm_len - 4) + 3) = (register_8)((len_b));
    *((s_r_block + pm_len - 4) + 2) = (register_8)((len_b) >> 8);
    *((s_r_block + pm_len - 4) + 1) = (register_8)((len_b) >> 16);
    *((s_r_block + pm_len - 4) + 0) = (register_8)((len_b) >> 24);
  };
  compress(s_r_block, block_nb);
  for (i = 0; i < 8; i++) {
    {
      *((&digest[i << 2]) + 3) = (register_8)((s_r[i]));
      *((&digest[i << 2]) + 2) = (register_8)((s_r[i]) >> 8);
      *((&digest[i << 2]) + 1) = (register_8)((s_r[i]) >> 16);
      *((&digest[i << 2]) + 0) = (register_8)((s_r[i]) >> 24);
    };
  }
}

std::string sha256(std::string input) {
  unsigned char digest[hash_functions::PADD_SIZE];
  memset(digest, 0, hash_functions::PADD_SIZE);

  hash_functions obj = hash_functions();
  obj.stateregister();
  obj.adjust_digest((unsigned char *)input.c_str(), input.length());
  obj.digest_final(digest);

  char buf[2 * hash_functions::PADD_SIZE + 1];
  buf[2 * hash_functions::PADD_SIZE] = 0;
  for (int i = 0; i < hash_functions::PADD_SIZE; i++)
    sprintf(buf + i * 2, "%02x", digest[i]);
  return std::string(buf);
}
#endif
#ifndef __ROTARYMARS__ERASE_UNIQUE__
#define __ROTARYMARS__ERASE_UNIQUE__

#include <algorithm>
#include <vector>
template <class T> void UNIQUE_ERASE(std::vector<T> &v) {
  std::sort(v.begin(), v.end());
  v.erase(std::unique(v.begin(), v.end()), v.end());
}
#endif
#endif