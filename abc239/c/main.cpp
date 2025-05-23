#include <iostream>
#include <set>
#include <utility>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  int gx[]={-1,1,2,2,1,-1,-2,-2},gy[]={2,2,1,-1,-2,-2,-1,1};
  set<pair<int,int>>se1,se2;
  for(int i=0;i<8;++i){
    se1.insert(make_pair(x1+gx[i],y1+gy[i]));
    se2.insert(make_pair(x2+gx[i],y2+gy[i]));
  }
  for(auto&i:se1){
    if(se2.contains(i)){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;
  return 0;
}
