#include <limits.h>

#include <algorithm>
#include <iostream>
#include <vector>
#ifndef __ROTARYMARS__RUD__
#define __ROTARYMARS__RUD__
template <class T>
T RUD(T a, T b) {
  return ((a + b - (T)1) / b);
}
#else
#endif
using namespace std;
int solve(vector<int>& v) {
  int now = 0;
  for (int i = 0; i < 5; i++) {
    now += v[i];
    if (i != 4) [[likely]]
      now = RUD(now, 10) * 10;
  }
  return now;
}
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  vector<int> v(5);
  for (int& i : v) cin >> i;
  sort(v.begin(), v.end());
  int ans = INT_MAX;
  do {
    ans = min(ans, solve(v));
  } while (next_permutation(v.begin(), v.end()));
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
