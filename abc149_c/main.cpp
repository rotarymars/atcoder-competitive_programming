#include <iostream>
#include <template/isprime.hpp>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  int x;
  cin>>x;
  for(int i=x;;i++){
    if(ISPRIME(i)){
      cout<<i<<endl;
      return 0;
    }
  }
	return 0;
}

