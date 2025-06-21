#include <iostream>
#include <set>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m,q;
  cin>>n>>m>>q;
  vector<set<int>>privileges(n,set<int>());
  vector<bool>has_all_privileges(n,false);
  for(;q--;){
    int t;
    cin>>t;
    if(t==1){
      int x,y;
      cin>>x>>y;
      privileges[--x].insert(y);
    }
    else if(t==2){
      int x;
      cin>>x;
      has_all_privileges[--x]=true;
    }
    else{
      int x,y;
      cin>>x>>y;
      --x;
      cout<<(has_all_privileges[x]||privileges[x].contains(y)?"Yes":"No")<<'\n';
    }
  }
  return 0;
}
