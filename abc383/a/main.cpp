#include <iostream>
// #define _DEBUG
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int beforetime=0,amount=0;
  for(int i=0;i<n;i++){
    int t,v;
    cin>>t>>v;
    amount-=t-beforetime;
    if(amount<0)amount=0;
    amount+=v;
    beforetime=t;
    #ifdef _DEBUG
    cout<<amount<<endl;
    #endif
  }
  cout<<amount<<endl;
  return 0;
}
