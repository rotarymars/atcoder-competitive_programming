#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,q;
  cin>>n>>q;
  vector<int>v(n);
  for(int&i:v)cin>>i;
  sort(v.begin(),v.end());
  for(;q;q--){
    int x;
    cin>>x;
    cout<<distance(lower_bound(v.begin(),v.end(),x),v.end())<<'\n';
  }
  return 0;
}
