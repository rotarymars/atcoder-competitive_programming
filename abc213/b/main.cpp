#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<pair<int,int>>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i].first;
    v[i].second=i+1;
  }
  sort(v.begin(),v.end(),greater<>());
  cout<<v[1].second<<endl;
  return 0;
}
