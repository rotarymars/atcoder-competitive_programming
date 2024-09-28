#include <algorithm>
#include <iostream>
#include <set>
#include <stack>
#include <utility>
#include <vector>
using namespace std;
#define int long long
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  set<int> alreadysearched;
  vector<vector<pair<int, int>>> graph(n);
  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    --u, --v;
    graph[u].push_back(make_pair(v, w));
  }
  vector<int> edge(n, 0);
  edge[0] = 0;
  for (int i = 0; i < n; i++) {
    if (!alreadysearched.contains(i)) {
      stack<int> st;
      st.push(i);
      while (!st.empty()) {
        int now = st.top();
        st.pop();
        alreadysearched.insert(now);
        for (auto& j : graph[now]) {
          st.push(j.first);
          edge[j.first] = edge[now] + j.second;
        }
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (i == 0) [[unlikely]]
      cout << edge[i];
    else
      cout << ' ' << edge[i];
  }
  cout << endl;
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
