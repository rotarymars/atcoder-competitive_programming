#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin >> n;

  for(int i=0; i<=n; ++i){
    long double j=i*1.08;
    int answer = j;
    if(answer==n){
      cout << i << endl;
      return 0;
    }
  }
  cout << ":(" << endl;
  return 0;
}
