#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin >> s;
  cout << count(s.begin(), s.end(), 'A') << ' '
       << count(s.begin(), s.end(), 'B') << ' '
       << count(s.begin(), s.end(), 'C') << ' '
       << count(s.begin(), s.end(), 'D') << ' '
       << count(s.begin(), s.end(), 'E') << ' '
       << count(s.begin(), s.end(), 'F') << endl;
  return 0;
}
