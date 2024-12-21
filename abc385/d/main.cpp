#include <iostream>
#include <map>
#include <utility>
#include <set>
using namespace std;
#define int long long
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m,sx,sy;
  cin>>n>>m>>sx>>sy;
  map<int,set<int>>vx,vy;
  set<pair<int,int>>house;
  for(int i=0;i<n;++i){
    int x,y;
    cin>>x>>y;
    vx[x].insert(y);
    vy[y].insert(x);
    house.insert(move(make_pair(x,y)));
  }
  pair<int,int>now{sx,sy};
  for(int i=0;i<m;++i){
    char d; int c;
    cin>>d>>c;
    if(d=='U'){
      auto leftit=vx[now.first].lower_bound(now.second),rightit=vx[now.first].upper_bound(now.second+c);
      for(auto i=leftit;i!=rightit;++i){
        house.erase(move(make_pair(now.first,*i)));
      }
      vx[now.first].erase(leftit,rightit);
      now.second+=c;
    }
    else if(d=='D'){
      auto leftit=vx[now.first].lower_bound(now.second-c),rightit=vx[now.first].upper_bound(now.second);
      for(auto i=leftit;i!=rightit;++i){
        house.erase(move(make_pair(now.first,*i)));
      }
      vx[now.first].erase(leftit,rightit);
      now.second-=c;
    }
    else if(d=='R'){
      auto leftit=vy[now.second].lower_bound(now.first),rightit=vy[now.second].upper_bound(now.first+c);
      for(auto i=leftit;i!=rightit;++i){
        house.erase(move(make_pair(*i,now.second)));
      }
      vy[now.second].erase(leftit,rightit);
      now.first+=c;
    }
    else if(d=='L'){
      auto leftit=vy[now.second].lower_bound(now.first-c),rightit=vy[now.second].upper_bound(now.first);
      for(auto i=leftit;i!=rightit;++i){
        house.erase(move(make_pair(*i,now.second)));
      }
      vy[now.second].erase(leftit,rightit);
      now.first-=c;
    }
  }
  cout<<now.first<<' '<<now.second<<' '<<n-house.size()<<endl;
  return 0;
}
