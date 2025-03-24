#include <iostream>
#include <set>
#include <utility>
using namespace std;
// #define _DEBUG
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,h,w;
  cin>>n>>h>>w;
  set<pair<int,int>>se;
  int curh=0,curw=0;
  se.insert(make_pair(curh,curw));
  for(int i=0;i<n;++i){
    char c;
    cin>>c;
    if(c=='N'){
      ++curh;
      ++h;
    }
    if(c=='S'){
      --curh;
      --h;
    }
    if(c=='W'){
      ++curw;
      ++w;
    }
    if(c=='E'){
      --curw;
      --w;
    }
    se.insert(make_pair(curh,curw));
    if(se.contains(make_pair(h,w))){
      cout<<'1';
    }
    else{
      cout<<'0';
    }
    #ifdef _DEBUG
    cout<<curh<<' '<<curw<<' '<<h<<' '<<w<<endl;
    #endif
  }
  cout<<endl;
  return 0;
}
