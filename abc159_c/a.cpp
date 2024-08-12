#include <iomanip>
#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  long double l;
  cin >> l;
  l /= 3;
  cout << fixed << setprecision(10) << l * l * l << endl;
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
