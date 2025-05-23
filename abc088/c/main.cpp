#include <iostream>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  vector<vector<int>>v(3,vector<int>(3));
  for(int i=0;i<3;++i)for(int j=0;j<3;++j)cin>>v[i][j];
  int firstdiff=v[0][1]-v[0][0],seconddiff=v[0][2]-v[0][1];
  bool isok=true;
  if(firstdiff!=v[1][1]-v[1][0])isok=false;
  if(seconddiff!=v[1][2]-v[1][1])isok=false;
  if(firstdiff!=v[2][1]-v[2][0])isok=false;
  if(seconddiff!=v[2][2]-v[2][1])isok=false;
  if(isok)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
