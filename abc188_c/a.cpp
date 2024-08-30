#include <iostream>
#ifndef __ROTARYMARS__DEBUGPRINT__
#define __ROTARYMARS__DEBUGPRINT__
#include <iostream>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
#else
#endif
#include <algorithm>
#include <vector>
using namespace std;

vector<int> f(vector<int> v) {
  if (v.size() == 2)
    return vector<int>({min(v[0], v[1])});
  vector<int> ret(v.size() / 2);
  for (int i = 0; i < ret.size(); i++) {
    ret[i] = max(v[i * 2], v[i * 2 + 1]);
  }
#ifdef _DEBUG
  for (int &i : ret)
    cout << i << ' ';
  cout << endl;
#endif
  return f(ret);
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> v(1 << n);
  for (int &i : v)
    cin >> i;
  int rate = f(v)[0];
  DP(rate);
  cout << distance(v.begin(), find(v.begin(), v.end(), rate)) + 1 << endl;
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
