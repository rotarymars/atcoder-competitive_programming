#include <iostream>
#ifndef __ROTARYMARS__GCD_LCM__
#define __ROTARYMARS__GCD_LCM__ 1
#include <algorithm>
template <class T>
T GCD(T a, T b) {
  while (a && b) {
    if (a >= b) {
      a %= b;
    } else {
      b %= a;
    }
  }
  return std::max(a, b);
}
template <class T>
T LCM(T a, T b) {
  return a / GCD(a, b) * b;
}
#else
#endif
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int k;
  cin >> k;
  int ans = 0;
  for (int i = 1; i <= k; ++i)
    for (int j = 1; j <= k; j++)
      for (int l = 1; l <= k; l++) ans += GCD(i, GCD(j, l));
  cout << ans << endl;
  return 0;
}

/*

                   N~
   MMMMMMMMMMMMMMM+O$M MMMMMMMMMMMMMMM+
  :M~~~~~~~~~~~~OMOOON$M,~~~~~~~~~~~~IM
  :M$77~~~~~~~77IMOOOOOM7I7~~~~~~~~~I8M
     M7~~~~~~~IMOOOOOOOOM8 ~~~~~~~:IM
     M7~~~~~~~IMOOOOOO8M +~~~~~~~IMM
     M7~~~~~~~IMOOOOOM. ~~~~~~~DIM
     M7~~~~~~~IMOOOMM :~~~~~~~IMM
     M7~~~~~~~IMOOM :~~~~~~~NIM$N
    MM7~~~~~~~IMMO ~~~~~~~~IMMOOO$M
   7+M7~~~~~~~IM O~~~~~~~ONMOOOOOOZ$.
 M+OOM7~~~~~~~I ~~~~~~~:IMOOOOOOOOOO$M
 M8OOM7~~~~~~~?~~~~~~~7MMOOOOOOOOOOODM
  88NM7~~~~~~~~~~~~~MMMOOOOOOOOOOOOD+
    MM7~~~~~~~~~~~~M~~MOOOOOOOOOODM
     M7~~~~~~~~~~=IMOOOOOOOOOOONN
     M7~~~~~~~~~I?~~~MM~~~MD+~~M8~~~$
     M7~~~~~~~IZMD~~ZOO:~~~~~~~~~~~~.
     M7~~~~~~IMDO8~~NOM~~NDM~~M ~~~M
     M7~~~~ZNMOOM~~8OO:~?DM8~~  M~~?
     M7~~~IM.:ND:~~MOM~~M M~~M N~~O~
     MMMMMM    MMMMMODNM+ ?III +III
                 M8ODM
                  M8O

*/
