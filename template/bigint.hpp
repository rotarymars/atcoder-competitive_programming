#ifndef __ROTARYMARS__BIGINT__
#define __ROTARYMARS__BIGINT__
#include <iostream>
#include <string>
#include <vector>

class BIGINT {
private:
  std::vector<signed short> value;

public:
  BIGINT() {}
  BIGINT(const std::string &a) {
    value.resize(a.size());
    for (const char &c : a)
      value.push_back(c - '0');
  }
  template <class T> BIGINT(const T &a) { *this = std::to_string(a); }
  BIGINT operator+(const BIGINT &);
  BIGINT operator-(const BIGINT &);
  BIGINT operator*(const BIGINT &);
  BIGINT operator/(const BIGINT &);
  BIGINT operator%(const BIGINT &);
  BIGINT operator^(const BIGINT &);
  BIGINT operator&(const BIGINT &);
  BIGINT operator|(const BIGINT &);
  BIGINT operator<<(const BIGINT &) {
    BIGINT ret = *this;
    ret /= 2;
    return ret;
  }
  BIGINT operator>>(const BIGINT &) {
    BIGINT ret = *this;
    ret *= 2;
    return ret;
  }
  BIGINT operator+=(const BIGINT &) {}
  BIGINT operator-=(const BIGINT &);
  BIGINT operator*=(const BIGINT &);
  BIGINT operator/=(const BIGINT &);
  BIGINT operator%=(const BIGINT &);
  BIGINT operator^=(const BIGINT &);
  BIGINT operator&=(const BIGINT &);
  BIGINT operator|=(const BIGINT &);
  BIGINT operator<<=(const BIGINT &) {
    *this /= 2;
    return *this;
  }
  BIGINT operator>>=(const BIGINT &a) {
    *this *= POW(2, a);
    return *this;
  }
  BIGINT operator--() {
    *this -= 1;
    return *this;
  }
  BIGINT operator++() {
    *this += 1;
    return *this;
  }
  BIGINT operator--(int) {
    BIGINT ret = *this;
    *this -= 1;
    return ret;
  }
  BIGINT operator++(int) {
    BIGINT ret = *this;
    *this += 1;
    return ret;
  }
  BIGINT operator=(const BIGINT &a) {
    value = a.value;
    return *this;
  }
  bool operator<(const BIGINT &);
  bool operator>(const BIGINT &);
  bool operator<=(const BIGINT &);
  bool operator>=(const BIGINT &);
  bool operator==(const BIGINT &);
  bool operator!=(const BIGINT &);
};
BIGINT POW(const BIGINT &a, const BIGINT &b);
template <class T> BIGINT POW(const BIGINT &a, const T &b);
#endif
