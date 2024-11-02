#include <iostream>
#include <template/segtree.hpp>
#include <climits>
using namespace std;
int op(int a,int b){
  return min(a,b);
}
int e(){
  return INT_MAX;
}
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(int&i:v)cin>>i;
  SEGMENTTREE<int,op,e>seg(v);
  int ans=0;
  for(int i=0;i<n;i++){
    if(seg.prod(0,i+1)==v[i])ans++;
  }
  cout<<ans<<endl;
	return 0;
}

