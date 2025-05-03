#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void rotate_clockwise(vector<vector<char>>&v){
  int n=v.size();
  vector<vector<char>>res(n,vector<char>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      res[j][n-1-i]=v[i][j];
    }
  }
  v=res;
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<vector<char>>s(n,vector<char>(n)),t(n,vector<char>(n));
  for(auto&i:s){
    for(auto&j:i){
      cin>>j;
    }
  }
  for(auto&i:t){
    for(auto&j:i){
      cin>>j;
    }
  }
  int ans=INT_MAX;
  for(int i=0;i<4;i++){
    int tmpcnt=0;
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
        if(s[j][k]!=t[j][k]){
          ++tmpcnt;
        }
      }
    }
    ans=min(ans,tmpcnt+i);
    rotate_clockwise(s);
  }
  cout<<ans<<endl;
  return 0;
}
