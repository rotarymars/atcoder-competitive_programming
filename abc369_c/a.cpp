#include <iostream>
#include <utility>
#include <vector>
#define int long long
using namespace std;
int count(pair<int, int> p, size_t size) {
  int ret = 0;
  for (int i = 2; i <= p.second - p.first + 1; i++) {
    ret += size - i + 1;
  }
  return ret;
  // return size-(p.second-p.first+1)+1;
}
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int &i : v)
    cin >> i;
  vector<pair<int, int>> sep;
  int bef = 0, befdiff = v[1] - v[0];
  for (int i = 1; i < n; i++) {
    if (v[i] - v[i - 1] == befdiff)
      continue;
    sep.emplace_back(make_pair(bef, i - 1));
    bef = i - 1;
    befdiff = v[i] - v[i - 1];
  }
  sep.push_back(make_pair(bef, n - 1));
  int ans = 0;
  for (auto &i : sep) {
    ans += count(i, i.second - i.first + 1);
#ifdef _DEBUG
    cout << i.first << ' ' << i.second << endl;
    cout << count(i, i.second - i.first + 1) << endl;
#endif
  }
  cout << ans + n << endl;
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
