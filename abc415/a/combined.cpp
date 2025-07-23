#include <iostream>
#include <set>
#line 1 "/home/rotarymars/projects/personal/atcoder-competitive_programming/template/ispalindrome.hpp"
#ifndef __ROTARYMARS__ISPALINDROME__
#define __ROTARYMARS__ISPALINDROME__
#include <string>
bool ISPALINDROME(std::string s) {
  for (int i = 0; i < s.size() / 2; i++)
  {
    if (s[i] == s[s.size() - 1 - i])
    {
      continue;
    }
    return false;
  }
  return true;
}
#else
#endif
#line 4 "main.cpp"
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