#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,a,b;
  cin>>n>>a>>b;
  n%=(a+b);
  if(n==0){
    cout<<"Bug\n";
    return 0;
  }
  n-=a;
  if(n<=0)
    cout<<"Ant\n";
  else
    cout<<"Bug\n";
  return 0;
}
