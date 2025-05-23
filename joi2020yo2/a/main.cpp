#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<vector<char>>base(n,vector<char>(n)),result(n,vector<char>(n));
  for(auto&i:base)for(char&j:i)cin>>j;
  for(auto&i:result)for(char&j:i)cin>>j;
  int clock=0,anticlock=0,upsidedown=0,normal=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(base[i][j]!=result[i][j])normal++;
      if(base[i][j]!=result[j][n-1-i])++clock;
      if(base[i][j]!=result[n-1-j][i])++anticlock;
      if(base[i][j]!=result[n-1-i][n-1-j])++upsidedown;
    }
  }
  cout<<min({clock+1,anticlock+1,upsidedown+2,normal})<<endl;
  return 0;
}
