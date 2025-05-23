#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>p(n),q(n);
  for(auto&i:p){
    cin>>i;
    --i;
  }
  for(auto&i:q){
    cin>>i;
    --i;
  }
  vector<int>table(n);
  for(int i=0;i<n;++i){
    table[q[i]]=p[i];
  }
  for(int i=0;i<n;++i){
    if(i==0)[[unlikely]]{
      cout<<q[table[i]]+1;
    }
    else{
      cout<<' '<<q[table[i]]+1;
    }
  }
  cout<<endl;
  return 0;
}
