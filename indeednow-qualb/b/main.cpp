#include <iostream>
#include <string>
using namespace std;
void rotate(string&s){
  s=s.back()+s.substr(0,s.size()-1);
  return;
}
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s,t;
  cin>>s>>t;
  for(int i=0;i<=s.size();++i){
    if(s==t){
      cout<<i<<endl;
      return 0;
    }
    rotate(s);
  }
  cout<<-1<<endl;
  return 0;
}
