#ifndef __ROTARYMARS__BIGINT__
#define __ROTARYMARS__BIGINT__
#include <iostream>
#include <string>
#include <vector>
class BIGINT {
  private:
    std::vector<signed short> value;
  public:
    BIGINT(){}
    BIGINT(const std::string&a) {
      value.resize(a.size());
      for(const char&c:a)value.push_back(c-'0');
    }
    BIGINT(const short&a) {
      (*this) = std::to_string(a);
    }
    BIGINT(const int&a) {
      (*this) = std::to_string(a);
    } 
    BIGINT(const long&a) {
      (*this) = std::to_string(a);
    } 
    BIGINT(const long long&a) {
      (*this) = std::to_string(a);
    }
    BIGINT(const unsigned short&a) {
      (*this) = std::to_string(a);
    }
    BIGINT(const unsigned int&a) {
      (*this) = std::to_string(a);
    }
    BIGINT(const unsigned long&a) {
      (*this) = std::to_string(a);
    }
    BIGINT(const unsigned long long&a) {
      (*this) = std::to_string(a);
    }
    BIGINT operator+(const BIGINT&);
    BIGINT operator-(const BIGINT&);
    BIGINT operator*(const BIGINT&);
    BIGINT operator/(const BIGINT&);
    BIGINT operator%(const BIGINT&);
    BIGINT operator^(const BIGINT&);
    BIGINT operator&(const BIGINT&);
    BIGINT operator|(const BIGINT&);
    BIGINT operator<<(const BIGINT&);
    BIGINT operator>>(const BIGINT&);
    BIGINT operator+=(const BIGINT&);
    BIGINT operator-=(const BIGINT&);
    BIGINT operator*=(const BIGINT&);
    BIGINT operator/=(const BIGINT&);
    BIGINT operator%=(const BIGINT&);
    BIGINT operator^=(const BIGINT&);
    BIGINT operator&=(const BIGINT&);
    BIGINT operator|=(const BIGINT&);
    BIGINT operator<<=(const BIGINT&);
    BIGINT operator>>=(const BIGINT&);
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
    BIGINT operator=(const BIGINT&a){
      value = a.value;
      return *this;
    }
    bool operator<(const BIGINT&);
    bool operator>(const BIGINT&);
    bool operator<=(const BIGINT&);
    bool operator>=(const BIGINT&);
    bool operator==(const BIGINT&);
    bool operator!=(const BIGINT&);
};
#endif
