#include <climits>
#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int K, N;
  cin >> K >> N;
  int A[1000000];
  for (int i = 0; i < N; i++) cin >> A[i];
  int ans = A[N - 1] - A[0];
  for (int i = 1; i < N; i++) {
    int i_to_start = K - A[i];
    int start_to_i1 = A[i - 1];
    ans = min(ans, i_to_start + start_to_i1);
  }
  cout << ans << endl;
  return 0;
}
