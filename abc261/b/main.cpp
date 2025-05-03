#include <iostream>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<vector<char>>v(n,vector<char>(n));
  for(auto&i:v){
    for(auto&j:i){
      cin>>j;
    }
  }
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      if(v[i][j]=='W'&&v[j][i]=='L')continue;
      if(v[i][j]=='L'&&v[j][i]=='W')continue;
      if(v[i][j]=='D'&&v[j][i]=='D')continue;
      if(v[i][j]=='-')continue;
      cout<<"incorrect"<<endl;
      return 0;
    }
  }
  cout<<"correct"<<endl;
  return 0;
}
