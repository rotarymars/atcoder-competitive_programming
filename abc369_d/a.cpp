#include <iostream>
#include <vector>
using namespace std;
#define int long long
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> v(n + 1);
  vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
  for (int i = 1; i <= n; i++)
    cin >> v[i];
  dp[1][1] = v[1];
  // horizontal->defeat vertical->skip
  //|
  // |\
	//x s
  for (int i = 1; i < n; i++)
    for (int j = 1; j < n; j++) {
      bool eventurn = (j - i) % 2 == 0;
      if (eventurn)
        dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + v[j + 1] * 2);
      else
        dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + v[j + 1]);
      dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j]);
    }
  int ans = 0;
  for (int i = 0; i <= n; i++)
    ans = max(ans, dp[i][n]);
#ifdef _DEBUG
  for (int i = 0; i < n + 1; i++) {
    for (int j = 0; j < n + 1; j++)
      cout << dp[i][j] << ' ';
    cout << endl;
  }
#endif
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
