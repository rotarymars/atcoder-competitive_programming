#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void f(vector<int> &v) {
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  --v[0], --v[1];
  return;
}
int cnt(vector<int> v) {
  int ret = 0;
  for (int &i : v)
    if (i > 0)
      ++ret;
  return ret;
}
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int &i : v)
    cin >> i;
  int ans = 0;
  while (cnt(v) > 1)
    f(v), ++ans;
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
