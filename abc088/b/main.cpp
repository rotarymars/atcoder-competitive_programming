#include <iostream>
#include <set>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  multiset<int>se;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    se.insert(a);
  }
  int alice=0,bob=0;
  int turn=1;
  while(!se.empty()){
    if(turn==1){
      alice+=*prev(se.end());
      se.erase(prev(se.end()));
    }
    else if(turn==-1){
      bob+=*prev(se.end());
      se.erase(prev(se.end()));
    }
    turn*=-1;
  }
  cout<<alice-bob<<endl;
  return 0;
}
