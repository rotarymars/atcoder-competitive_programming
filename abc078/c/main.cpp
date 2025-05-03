#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long n,m;
  cin>>n>>m;
  long long pownum=1;
  for(int i=0;i<m;++i){
    pownum*=2;
  }
  cout<<(100*(n-m)+1900*m)*pownum<<endl;
  return 0;
}
