#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  char a,b;
  cin>>n>>a>>b;
  for(int i=0;i<n;++i){
    char c;
    cin>>c;
    if(c==a)cout<<c;
    else cout<<b;
  }
  cout<<endl;
  return 0;
}
