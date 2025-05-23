#include <iostream>
#include <string>
#include <vector>
using namespace std;
void f(string*s){
  for(int i=0;i<s->size()-1;i++){
    if((*s)[i]=='T'&&(*s)[i+1]=='T'){
      (*s)[i]='P';
      (*s)[i+1]='C';
      i++;
    }
  }
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w;
  cin>>h>>w;
  vector<string>v(h);
  for(auto&i:v){
    cin>>i;
  }
  for(int i=0;i<h;i++){
    f(&v[i]);
  }
  for(auto&i:v){
    cout<<i<<endl;
  }
  return 0;
}
