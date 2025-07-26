#include <iostream>
#line 1 "/home/rotarymars/projects/personal/atcoder-competitive_programming/template/isprime.hpp"
#ifndef __ROTARYMARS__ISPRIME
#define __ROTARYMARS__ISPRIME 1
template<class T>
bool ISPRIME(const T a) {
  if (a <= 1)
  {
    return false;
  }
  for (T i = 2; i * i <= a; i++)
  {
    if (a % i == 0)
    {
      return false;
    }
  }
  return true;
}
#else
#endif
#line 3 "main.cpp"
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  if(ISPRIME(n)){
    cout<<"Prime"<<endl;
  }
  else{
    if(n%2!=0&&n%5!=0&&n%3!=0&&n!=1){
      cout<<"Prime"<<endl;
    }
    else{
      cout<<"Not Prime"<<endl;
    }
  }
  return 0;
}