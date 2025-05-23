#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long n;
  cin>>n;
  cout<<n/10-(n%10<0)<<endl;
  return 0;
}
