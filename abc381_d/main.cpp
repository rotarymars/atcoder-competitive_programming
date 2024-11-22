#include <iostream>
#include <vector>
#include <set>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(int&i:v)cin>>i;
  int lind=0,rind=0;
  int ans=0;

  while(true){
    if(lind+1>=n)break;
    if(v[lind]==v[lind+1]){
      set<int>se;
      rind=lind+3;
      se.insert(v[lind]);
      while(true){
        if(rind>=n)break;
        if(v[rind]==v[rind-1]/*&&!se.contains(v[rind])*/){
          if(se.contains(v[rind])){
            ans=max(ans,rind-2-lind+1);
            while(lind<rind){
              se.erase(v[lind]);
              lind+=2;
              if(!se.contains(v[rind]))break;
            }
          }
          se.insert(v[rind]);
          rind+=2;
        }
        else break;
      }
      rind-=2;
      ans=max(ans,rind-lind+1);
      lind = rind-1;
    }
    ++lind;
  }
  cout<<ans<<endl;
	return 0;
}

