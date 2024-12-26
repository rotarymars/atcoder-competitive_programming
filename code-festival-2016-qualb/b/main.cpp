#include <iostream>
#include <string>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,a,b;
  string s;
  cin>>n>>a>>b>>s;
  int acnt=0,bcnt=0;
  for(auto&i:s){
    if(i=='c')cout<<"No\n";
    if(i=='a'){
      if(acnt+bcnt<a+b){
        cout<<"Yes\n";
        ++acnt;
      }
      else{
        cout<<"No\n";
      }
    }
    if(i=='b'){
      if(acnt+bcnt<a+b&&bcnt<b){
        cout<<"Yes\n";
        ++bcnt;
      }
      else{
        cout<<"No\n";
      }
    }
  }
  return 0;
}
