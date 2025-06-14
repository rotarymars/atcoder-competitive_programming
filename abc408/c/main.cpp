#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector<int>imos(n+1,0);
  for(int i=0;i<m;i++){
    int l,r;
    cin>>l>>r;
    imos[--l]++;
    imos[r]--;
  }
  for(int i=0;i<n;i++){
    imos[i+1]+=imos[i];
  }
  cout<<*min_element(imos.begin(),prev(imos.end()))<<endl;
  return 0;
}
