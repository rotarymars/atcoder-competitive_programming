#include <iostream>
#include <template/isprime.hpp>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  if(ISPRIME(n)){
    cout<<"Prime"<<endl;
  }
  else{
    if(n%2!=0&&n%5!=0&&n%3!=0&&n!=1){
      cout<<"Prime"<<endl;
    }
    else{
      cout<<"Not Prime"<<endl;
    }
  }
  return 0;
}
