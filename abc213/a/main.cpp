#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a,b;
  cin>>a>>b;
  for(int i=0;i<=255;i++){
    if((a^i)==b){
      cout<<i<<endl;
      return 0;
    }
  }
  return -1;
}
