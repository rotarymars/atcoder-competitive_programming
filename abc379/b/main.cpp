#include <iostream>
#include <string>
using namespace std;
int times=0;
void compute(string&s,int i, int k){
  if(s.substr(i,k)==string(k,'O')){
    ++times;
    for(int j=i;j<i+k;++j){
      s[j]='X';
    }
  }
  return;
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,k;
  string s;
  cin>>n>>k>>s;
  for(int i=0;i<n-k+1;++i){
    compute(s,i,k);
  }
  cout<<times<<endl;
  return 0;
}
