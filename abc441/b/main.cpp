#include <template/fastio.hpp>
#include <set>
#include <string>
using namespace std;
signed main() {
  FastIO io;
  int n,m;
  io.read(n,m);
  set<char>s,t;
  for(int i=0;i<n;i++){
    char c;
    io.read(c);
    s.insert(c);
  }
  for(int i=0;i<m;i++){
    char c;
    io.read(c);
    t.insert(c);
  }
  int q;
  io.read(q);
  for(int i=0;i<q;i++){
    string w;
    io.read(w);
    // io.write(w,'\n');
    bool st=true,tt=true;
    for(char&c:w){
      if(!s.contains(c)){
        st=false;
      }
      if(!t.contains(c)){
        tt=false;
      }
    }
    if(st&&(!tt)){
      io.write("Takahashi\n");
    }
    else if((!st)&&tt){
      io.write("Aoki\n");
    }
    else{
      io.write("Unknown\n");
    }
  }
  return 0;
}
