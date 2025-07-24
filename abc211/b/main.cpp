#include <iostream>
#include <set>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string sa,sb,sc,sd;
  cin>>sa>>sb>>sc>>sd;
  set<string>st;
  st.insert(sa);
  st.insert(sb);
  st.insert(sc);
  st.insert(sd);
  if(st.size()==4)cout<<"Yes\n";
  else cout<<"No\n";
  return 0;
}
