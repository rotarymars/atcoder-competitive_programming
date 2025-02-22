#include <iostream>
#include <vector>
using namespace std;
char *ans[]={
  "###.?????",
  "###.?????",
  "###.?????",
  "....?????",
  "?????????",
  "?????....",
  "?????.###",
  "?????.###",
  "?????.###"
};
bool istakcode(const vector<vector<char>>&v, int i, int j) {
  for(int k=i;k<i+9;++k){
    for(int l=j;l<j+9;++l){
      if(ans[k-i][l-j]=='?'){
        continue;
      }
      if(ans[k-i][l-j]!=v[k][l]){
        return false;
      }
    }
  }
  return true;
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w;
  cin>>h>>w;
  vector<vector<char>>v(h,vector<char>(w));
  for(auto&i:v){
    for(auto&j:i){
      cin>>j;
    }
  }
  for(int i=0;i<h-8;++i){
    for(int j=0;j<w-8;++j){
      if(istakcode(v,i,j)){
        cout<<i+1<<' '<<j+1<<'\n';
      }
    }
  }
  return 0;
}
