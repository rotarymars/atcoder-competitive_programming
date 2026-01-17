#include <template/fastio.hpp>
#include <atcoder/segtree>
#include <vector>
#include <string>
using namespace std;
long long plus(long long a,long long b){return a+b;}
long long e(){return 0;}
int main(){
  FastIO io;
  int n;
  string s;
  io.read(n,s);
  vector<int>diff(n+1);
  diff[0]=0;
  for(int i=0;i<n;i++){
    diff[i+1]=diff[i];
    if(s[i]=='A')diff[i+1]++;
    else if(s[i]=='B')diff[i+1]--;
  }
  int offset=n;
  atcoder::segtree<long long,::plus,e>seg(2*n+1);
  long long ans=0;
  seg.set(diff[0]+offset,1);
  for(int r=0;r<n;r++){
    int val=diff[r+1]+offset;
    ans+=seg.prod(0,val);
    seg.set(val,seg.get(val)+1);
  }
  io.write(ans,'\n');
  return 0;
}
