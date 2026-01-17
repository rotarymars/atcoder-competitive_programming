#include <template/fastio.hpp>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
signed main() {
  FastIO io;
  long long n,k,x;
  io.read(n,k,x);
  vector<long long>a(n);
  io.read(a);
  sort(a.begin(),a.end());
  long long ans=n-k;
  a=vector<long long>(a.begin(),a.begin()+k); // size k
  long long current=0;
  int idx=0;
  while(current<x&&idx<k){
    current+=a[k-1-idx];
    idx++;
  }
  io.write(current>=x?ans+idx:-1,'\n');
  return 0;
}
