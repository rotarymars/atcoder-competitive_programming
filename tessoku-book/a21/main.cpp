#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<pair<int,int>>v(n);
  for(auto&i:v){
    cin>>i.first>>i.second;
  }
  vector<vector<int>>dp(n,vector<int>(n,-1));
  return 0;
}
