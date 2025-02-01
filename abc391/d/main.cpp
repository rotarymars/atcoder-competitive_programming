#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#include <queue>
using namespace std;
// #define _DEBUG
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,w;
  cin>>n>>w;
  vector<queue<pair<int,int>>>v(w,queue<pair<int,int>>()); // <cube num, ycor>
  for(int i=0;i<n;++i){
    int x,y;
    cin>>x>>y;
    --x;
    v[x].push(make_pair(i,y));
  }
  vector<int>whentodisappear(n,-1);
  int befdone=0;
  while(true){
    vector<pair<int,int>>temp(w,make_pair(-1,-1));
    int emptycnt=0;
    for(int i=0;i<w;++i){
      if(!v[i].empty()){
        temp[i]=v[i].front();
        v[i].pop();
      }
      else{
        ++emptycnt;
      }
    }
    if(emptycnt==w){
      break;
    }
    if(emptycnt!=0){
      continue;
    }
    vector<int>bottom(w);
    for(int i=0;i<w;++i){
      bottom[i]=max(1,temp[i].second-befdone);
    }
    int maxbottom=*max_element(bottom.begin(),bottom.end());
    for(int i=0;i<w;++i){
      whentodisappear[temp[i].first]=maxbottom+befdone;
    }
    befdone+=maxbottom;
  }
  int q;
  cin>>q;
  for(int i=0;i<q;++i){
    int a,b;
    cin>>a>>b;
    --b;
    cout<<(whentodisappear[b]<=a&&whentodisappear[b]!=-1?"No":"Yes")<<'\n';
  }
  #ifdef _DEBUG
  for(int i=0;i<w;++i){
    cout<<whentodisappear[i]<<' ';
  }
  #endif
  return 0;
}
