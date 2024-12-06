#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w;
  cin>>h>>w;
  vector<string>v(h);
  for(int i=0;i<h;++i)cin>>v[i];;
  cout<<string(w+2,'#')<<'\n';
  for(int i=0;i<h;++i){
    cout<<'#';
    cout<<v[i];
    cout<<'#';
    cout<<'\n';
  }
  cout<<string(w+2,'#')<<'\n';
  return 0;
}
