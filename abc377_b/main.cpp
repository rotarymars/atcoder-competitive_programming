#include <iostream>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  constexpr  int h=8,w=8;
  vector<vector<char>>v(h,vector<char>(w));
  vector<vector<bool>>b(h,vector<bool>(w,false));
  for(auto&i:v)for(auto&j:i)cin>>j;
  for(int i=0;i<h;i++)for(int j=0;j<w;j++){
    if(v[i][j]=='#')
    {
      for(int k=0;k<8;k++){
        b[i][k]=true;
      }
      for(int k=0;k<8;k++){
        b[k][j]=true;
      }
    }
  }
  int ans=0;
  for(int i=0;i<h;i++)for(int j=0;j<w;j++)ans+=b[i][j];
  cout<<64-ans<<endl;
	return 0;
}

