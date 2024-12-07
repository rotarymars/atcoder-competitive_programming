#include <iostream>
#ifndef __ROTARYMARS__ISPRIME
#define __ROTARYMARS__ISPRIME 1
template<class T>
bool ISPRIME(const T a) {
  if (a <= 1)
  {
    return false;
  }
  for (T i = 2; i * i <= a; i++)
  {
    if (a % i == 0)
    {
      return false;
    }
  }
  return true;
}
#else
#endif
#ifndef __ROTARYMARS__RUD__
#define __ROTARYMARS__RUD__
template<class T>
T RUD(T a, T b) {
  return ((a + b - (T)1) / b);
}
#else
#endif
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long temp;
  cin>>temp;
  const long long n=temp;
  long long ans=0;
  for(long long i=2;i*i*i*i*i*i*i*i<=n;i++){
    if(ISPRIME(i)){
      ++ans;
    }
  }
  for(long long i=2;true;i++){
    if(!ISPRIME(i))continue;
    if(i*i*(i+1)*(i+1)>n)break;
    for(long long j=i+1;true;j++){
      if(!ISPRIME(j))continue;
      if(i*i*j*j<=n){
        ++ans;
      }
      else break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
