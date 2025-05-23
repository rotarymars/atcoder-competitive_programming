#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  set<vector<int>> se;
  while (n--) {
    int l;
    cin >> l;
    vector<int> v(l);
    for (int &i : v)
      cin >> i;
    se.insert(v);
  }
  cout << se.size() << endl;
}
