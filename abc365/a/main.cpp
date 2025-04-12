#include <iostream>
using namespace std;
bool isleapyear(int year){
  return year%4==0&&year%100!=0||year%400==0;
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int x;
  cin>>x;
  if(isleapyear(x)){
    cout<<"366\n";
  }
  else{
    cout<<"365\n";
  }
  return 0;
}
