#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,d;
  cin>>n>>d;
  int a,b;
  a=b=-1;
  cin>>a;
  for(int i=1;i<n;i++){
    cin>>b;
    if(b-a<=d){
      cout<<b<<endl;
      return 0;
    }
    a=b;
  }
  cout<<-1<<endl;
  return 0;
}
