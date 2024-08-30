#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
bool nextpermutation(vector<int> &tmp, vector<int> &v) {
  int index = tmp.size() - 1;
  for (;; index--) {
    if (tmp[index] == v[index]) {
      if (index == 0)
        return false;
      else {
        tmp[index] = 1;
        continue;
      }
    } else {
      tmp[index]++;
      return true;
    }
  }
}
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int &i : v)
    cin >> i;
  vector<int> tmp(n, 1);
  bool noprint = true;
  do {
    int a = accumulate(tmp.begin(), tmp.end(), 0);
    if (a % k == 0) {
      for (int i = 0; i < n; i++) {
        noprint = false;
        if (i == 0) [[unlikely]]
          cout << tmp[i];
        else
          cout << ' ' << tmp[i];
      }
      cout << '\n';
    }
  } while (nextpermutation(tmp, v));
  if (noprint)
    cout << endl;
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
