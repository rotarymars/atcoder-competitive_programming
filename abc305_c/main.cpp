#include <iostream>
#include <set>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  int h,w;
  cin>>h>>w;
  vector<vector<char>>v(h,vector<char>(w));
  for(int i=0;i<h;i++)for(int j=0;j<w;j++)cin>>v[i][j];
  set<int>seh,sew;
  for(int i=0;i<h;i++)for(int j=0;j<w;j++){
    if(v[i][j]=='.')continue;
    seh.insert(i);
    sew.insert(j);
  }
  for(auto i:seh)for(auto j:sew){
    if(v[i][j]=='.'){
      cout<<i+1<<' '<<j+1<<endl;
      return 0;
    }
  }
	return 0;
}

