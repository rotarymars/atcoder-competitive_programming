#include <iostream>
#include <set>
#include <template/ispalindrome.hpp>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  set<int>se;
  for(;n--;){
    int a;
    cin>>a;
    se.emplace(a);
  }
  int x;
  cin>>x;
  cout<<(se.contains(x)?"Yes":"No")<<endl;
  return 0;
}
