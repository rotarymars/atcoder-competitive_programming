#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  string s;
  io.readString(s);
  for(int i=0;i<s.size();++i){
    if(s[i]!='a'&&s[i]!='i'&&s[i]!='u'&&s[i]!='e'&&s[i]!='o'){
      io.writeChar(s[i]);
    }
  }
  io.writeChar('\n');
  return 0;
}
