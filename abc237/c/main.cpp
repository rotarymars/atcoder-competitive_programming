#include <iostream>
#include <string>
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
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  if(ISPALINDROME(s)){
    cout<<"Yes\n";
    return 0;
  }
  int acnt=-1;
  for(int i=s.size()-1;i>=0;--i){
    if(s[i]=='a'){
      continue;
    }
    acnt=s.size()-1-i;
    break;
  }
  if(acnt==-1){
    acnt=s.size();
  }
  int forwardacnt=-1;
  for(int i=0;i<(int)s.size();++i){
    if(s[i]=='a'){
      continue;
    }
    forwardacnt=i;
    break;
  }
  if(forwardacnt==-1){
    forwardacnt=s.size();
  }
  s=string(max(0,acnt-forwardacnt),'a')+s;
  if(ISPALINDROME(s)){
    cout<<"Yes\n";
  }
  else{
    cout<<"No\n";
  }
  return 0;
}
