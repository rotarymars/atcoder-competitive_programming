#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long n;
  cin>>n;
  long long a=0;
  for(int i=0;i<n+10;++i){
    if(a<n)a+=i;
    else{
      cout<<i-1<<endl;
      return 0;
    }
  }
  return 0;
}
