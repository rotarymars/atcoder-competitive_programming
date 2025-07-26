#include <template/fastio.hpp>
#include <vector>
#include <algorithm>
using namespace std;
using int64 = long long;

int main() {
  FastIO io;
  int T;
  io.read(T);
  while (T--) {
    int N;
    long long M;
    io.read(N); io.read(M);
    vector<long long> A(N), B(N);
    long long sumA = 0, sumB = 0;
    for (int i = 0; i < N; ++i) {
      io.read(A[i]);
      sumA += A[i];
    }
    for (int i = 0; i < N; ++i) {
      io.read(B[i]);
      sumB += B[i];
    }
    
    vector<long long> Tthr(N);
    for (int i = 0; i < N; ++i) {
      Tthr[i] = (B[i] == 0 ? M : M - B[i]);
    }
    
    sort(A.begin(), A.end());
    sort(Tthr.begin(), Tthr.end());
    
    long long wraps = 0;
    int i = 0;
    for (int j = 0; j < N && i < N; ++j) {
      long long t = Tthr[j];
      while (i < N && A[i] < t) i++;
      if (i < N) {
          wraps++;
          i++;
      }
    }
    
    long long ans = sumA + sumB - M * wraps;
    io.writeInt(ans,'\n');
  }
  return 0;
}
