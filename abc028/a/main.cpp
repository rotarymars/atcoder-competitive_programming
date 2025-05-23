#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  if (n <= 59)
    cout << "Bad\n";
  else if (n <= 89)
    cout << "Good\n";
  else if (n <= 99)
    cout << "Great\n";
  else
    cout << "Perfect\n";
  return 0;
}
