#include <iostream>
#line 1 "/home/rotarymars/projects/personal/atcoder-competitive_programming/template/prime_factorize.hpp"
#ifndef __ROTARYMARS__PRIME_FACTORIZE__
#define __ROTARYMARS__PRIME_FACTORIZE__
#include <vector>
#include <utility>
#include <algorithm>
template <class T>
std::vector<std::pair<T, T>> PRIME_FACTORIZE(T n) {
  std::vector<std::pair<T, T>> result;
  for (T i = 2; i * i <= n; i++)
  {
    if (n % i != 0)
    {
      continue;
    }
    T ex = 0;
    while (n % i == 0)
    {
      ++ex;
      n /= i;
    }
    result.push_back({ i, ex });
  }
  if (n != 1)
  {
    result.push_back({ n, 1 });
  }
  sort(result.begin(),result.end());
  return result;
}
#else
#endif
#line 3 "main.cpp"
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
#line 4 "main.cpp"
#include <vector>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<pair<int,int>>v=PRIME_FACTORIZE(n);
  if(v.size()==1&&ISPRIME(v[0].first))
    cout<<"No\n";
  else cout<<"Yes\n";
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--)solve();
  return 0;
}