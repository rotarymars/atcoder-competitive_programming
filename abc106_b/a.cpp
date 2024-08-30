#include <iostream>
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
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i += 2) {
    if (ENUM_DIVISORS(i).size() == 8)
      ans++;
  }
  cout << ans << endl;
  return 0;
}

/*
                          ./+o+-
                  yyyyy- -yyyyyy+
               ://+//////-yyyyyyo
           .++ .:/++++++/-.+sss/`
         .:++o:  /++++++++/:--:/-
        o:+o+:++.`..```.-/oo+++++/
       .:+o:+o/.          `+sssoo+/
  .++/+:+oo+o:`             /sssooo.
 /+++//+:`oo+o               /::--:.
 \+/+o+++`o++o               ++////.
  .++.o+++oo+:`             /dddhhh.
       .+.o+oo:.          `oddhhhh+
        \+.++o+o``-````.:ohdhhhhh+
         `:o+++ `ohhhhhhhhyo++os:
           .o:`.syhhhhhhh/.oo++o`
               /osyyyyyyo++ooo+++/
                   ````` +oo+++o\:
                          `oo++.
*/
