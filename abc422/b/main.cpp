#include <template/fastio.hpp>
#include <vector>
using namespace std;
signed main() {
  FastIO io;
  int h,w;
  io.read(h,w);
  vector<vector<char>>v(h,vector<char>(w));
  io.read(v);
  int dh[]={-1,0,1,0},dw[]={0,1,0,-1};
  bool flag=true;
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      if(v[i][j]=='#'){
        int cnt=0;
        for(int k=0;k<4;++k){
          int newh=i+dh[k],neww=j+dw[k];
          if(0<=newh&&newh<h&&0<=neww&&neww<w&&v[newh][neww]=='#'){
            ++cnt;
          }
        }
        if(cnt==2||cnt==4){}
        else{
          flag=false;
          // io.write("False at ",i," ",j," cnt=",cnt,"\n");
        }
      }
    }
  }
  io.write(flag?"Yes":"No",'\n');
  return 0;
}
