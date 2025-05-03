#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  vector<string>v{"N","NE","E","SE","S","SW","W","NW"};
  string s;
  cin>>s;
  auto it=find(v.begin(),v.end(),s);
  cout<<v[(it-v.begin()+4)%8]<<endl;
  return 0;
}
