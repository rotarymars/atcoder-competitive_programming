#include <iostream>
#include <string>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long n;
  cin>>n;
  string ans="";
  while(n>0){
    --n;
    ans=char('a'+n%26)+ans;
    n/=26;
  }
  cout<<ans<<endl;
  return 0;
}
