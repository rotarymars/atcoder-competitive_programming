#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,k;
  cin>>n>>k;
  long long max=1;
  for(;k--;){
    max*=10ll;
  }
  long long now=1;
  --max;
  for(;n--;){
    long long a;
    cin>>a;
    if(now>max/a){
      now=1;
    }
    else{
      now*=a;
    }
  }
  cout<<now<<endl;
  return 0;
}
