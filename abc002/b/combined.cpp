#line 1 "/home/rotarymars/projects/personal/atcoder-competitive_programming/template/fastio.hpp"
#include <cstdio>
#include <cstdint>
#include <string>
#include <type_traits>
#include <cmath>
#include <cctype>

struct FastIO {
    static constexpr size_t IN_BUF_SIZE  = 1 << 10;
    static constexpr size_t OUT_BUF_SIZE = 1 << 10;

    FILE* in;
    char  inbuf[IN_BUF_SIZE];
    size_t in_idx, in_len;

    FILE* out;
    char  outbuf[OUT_BUF_SIZE];
    size_t out_idx;

    FastIO(FILE* _in = stdin, FILE* _out = stdout)
        : in(_in), in_idx(0), in_len(0),
          out(_out), out_idx(0) {}

    ~FastIO() { flush(); }


    inline int gc() {
        if (in_idx >= in_len) {
            in_len = std::fread(inbuf, 1, IN_BUF_SIZE, in);
            in_idx = 0;
            if (in_len == 0) return EOF;
        }
        return static_cast<unsigned char>(inbuf[in_idx++]);
    }

    inline bool readCharRaw(char &c) {
        int x = gc();
        if (x == EOF) return false;
        c = static_cast<char>(x);
        return true;
    }

    inline bool skipSpaces(int &c) {
        do {
            c = gc();
            if (c == EOF) return false;
        } while (isspace(c));
        return true;
    }

    inline void pc(char c) {
        if (out_idx >= OUT_BUF_SIZE) flush();
        outbuf[out_idx++] = c;
    }

    inline void flush() {
        if (out_idx) {
            std::fwrite(outbuf, 1, out_idx, out);
            out_idx = 0;
        }
    }

    template<class T>
    bool readInt(T &out) {
        int c;
        if (!skipSpaces(c)) return false;
        T sign = 1;
        if (c == '-') { sign = -1; c = gc(); }
        T val = 0;
        while ('0' <= c && c <= '9') {
            val = val * 10 + (c - '0');
            c = gc();
        }
        out = val * sign;
        return true;
    }

    bool readDouble(double &out) {
        int c;
        if (!skipSpaces(c)) return false;

        int sign = 1;
        if (c == '-') { sign = -1; c = gc(); }

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
            1.0,
            1e-1, 1e-2, 1e-3, 1e-4, 1e-5, 1e-6, 1e-7, 1e-8, 1e-9,
            1e-10,1e-11,1e-12,1e-13,1e-14,1e-15,1e-16,1e-17,1e-18
        };

        double val = (double)ip;
        if (fd) val += (double)fp * pow10neg[fd];
        if (expVal) val *= std::pow(10.0, expSign * expVal);
        out = sign * val;
        return true;
    }

    bool readString(std::string &s) {
        int c;
        if (!skipSpaces(c)) return false;
        s.clear();
        do {
            s.push_back(static_cast<char>(c));
            c = gc();
        } while (c > ' ');
        return true;
    }

    bool readLine(std::string &s) {
        s.clear();
        char ch;
        if (!readCharRaw(ch)) return false;
        while (ch == '\n' || ch == '\r') {
            if (!readCharRaw(ch)) return false;
        }
        do {
            s.push_back(ch);
            if (!readCharRaw(ch)) break;
        } while (ch != '\n' && ch != '\r');
        return true;
    }

    bool readChar(char &c) { return readCharRaw(c); }

    void writeChar(char c) { pc(c); }

    void writeString(const std::string &s, char end = '\0') {
        for (char c : s) pc(c);
        if (end) pc(end);
    }

    template<class T>
    void writeInt(T x, char end = '\0') {
        if (x == 0) {
            pc('0');
            if (end) pc(end);
            return;
        }
        if constexpr (std::is_signed<T>::value) {
            if (x < 0) {
                pc('-');
                unsigned long long ux = static_cast<unsigned long long>(-(x + 1)) + 1ull;
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
        while (n--) pc(s[n]);
        if (end) pc(end);
    }

    void writeDouble(double x, int precision = 10, char end = '\0') {
        char tmp[128];
        int n = std::snprintf(tmp, sizeof(tmp), "%.*f", precision, x);
        for (int i = 0; i < n; ++i) pc(tmp[i]);
        if (end) pc(end);
    }

    void writeYesNo(bool b, char end = '\n') {
        if (b) writeString("Yes", end);
        else   writeString("No", end);
    }
};
#line 2 "main.cpp"
using namespace std;
signed main() {
  FastIO io;
  string s;
  io.readString(s);
  for(int i=0;i<s.size();++i){
    if(s[i]!='a'&&s[i]!='i'&&s[i]!='u'&&s[i]!='e'&&s[i]!='o'){
      io.writeChar(s[i]);
    }
  }
  io.writeChar('\n');
  return 0;
}