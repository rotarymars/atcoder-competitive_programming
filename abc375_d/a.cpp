#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string s;
  cin >> s;
  vector<vector<ll>> v(s.size(), vector<ll>(26, 0));
  v[0][s[0] - 'A']++;
  for (int i = 1; i < s.size(); ++i) {
    v[i] = v[i - 1];
    v[i][s[i] - 'A']++;
  }
#ifdef _DEBUG
  for (int i = 0; i < s.size(); ++i) {
    for (int j = 0; j < 26; j++) cout << v[i][j] << ' ';
    cout << endl;
  }
#endif
  ll ans = 0;
  for (int i = 0; i < s.size(); ++i) {
    vector<ll> diff(26);
    for (int j = 0; j < 26; j++) diff[j] = v.back()[j] - v[i][j];
    if (diff[s[i] - 'A'] + 1 >= 3) {
      ll tmp = diff[s[i] - 'A'] + 1;
      ans += (tmp - 1) * (tmp - 2) / 2;
#ifdef _DEBUG
      cout << i << " entered 3if" << endl;
      cout << "added " << tmp * (tmp - 1) * (tmp - 2) / 6 << endl;
#endif
    }
    for (int j = 0; j < 1; j++) {
      if (i == 0 || i == s.size() - 1) break;
      vector<ll> befdiff(26);
      befdiff = v[i];
      befdiff[s[i] - 'A']--;
      ll tmp = 0;
      for (int k = 0; k < 26; k++) {
        if (k == s[i] - 'A') continue;
        tmp += befdiff[k] * diff[k];
      }
      ans += tmp;
#ifdef _DEBUG
      cout << i << " entered 2if" << endl;
      cout << "added " << tmp << endl;
#endif
    }
  }
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
