#include <fastio.hpp>
#include <map>
#include <utility>
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

#ifndef __ROTARYMARS__INVERSE_ELEMENT__
#define __ROTARYMARS__INVERSE_ELEMENT__ 1
#include <cstdlib>
#ifndef __ROTARYMARS__POWMOD__
#define __ROTARYMARS__POWMOD__
template <class T>
T POWMOD(T a, T b, T c) {
  T ans = 1;
  a %= c;
  while (b != 0)
  {
    if (b & 1)
    {
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
struct Info { int mx1, cnt, mx2; };
void solve() {
  int n;
  io.read(n);
  vector<long long>v(n);
  io.read(v);
  map<int,Info>mp;
  vector<int>ans;
  vector<vector<pair<long long,long long>>>facres(n);
  constexpr int mod=998244353;
  for (int i=0;i<n;++i) {
    auto pf=PRIME_FACTORIZE(v[i]);
    facres[i]=pf;
    for (const auto &[fac,p]:pf) {
      if (!mp.count(fac)) {
        mp[fac]={p,1,0};
      }
      else {
        auto &info=mp[fac];
        if (p>info.mx1) {
          info.mx2=info.mx1;
          info.mx1=p;
          info.cnt=1;
        } else if (p==info.mx1) {
          info.cnt++;
        } else if (p>info.mx2) {
          info.mx2=p;
        }
      }
    }
  }
  long long lcm=1;
  for (const auto &[fac,info]:mp) {
    lcm=lcm*POWMOD(fac,info.mx1,mod)%mod;
  }
  for (int i=0;i<n;++i) {
    auto &pf=facres[i];
    long long div=1;
    for (const auto &[fac,p]:pf) {
      auto &info=mp[fac];
      if (p==info.mx1 && info.cnt==1) {
        int diff=p-info.mx2;
        div=div*POWMOD(fac,diff,mod)%mod;
      }
    }
    ans.push_back(lcm*inverse_element(div,mod)%mod);
  }
  io.writeln(ans);
}
signed main() {
  int t;
  io.read(t);
  while (t--)solve();
  return 0;
}
