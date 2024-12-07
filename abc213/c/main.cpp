#include <iostream>
#include <algorithm>
#include <vector>
// #define _DEBUG
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w,n;
  cin>>h>>w>>n;
  vector<int>a(n),b(n);
  for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
  }
  vector<int>acp=a,bcp=b;
  ranges::sort(acp),ranges::sort(bcp);
  acp.erase(unique(acp.begin(),acp.end()),acp.end());
  bcp.erase(unique(bcp.begin(),bcp.end()),bcp.end());
  for(int i=0;i<n;i++){
    cout<<distance(acp.begin(),lower_bound(acp.begin(),acp.end(),a[i]))+1<<' '<<distance(bcp.begin(),lower_bound(bcp.begin(),bcp.end(),b[i]))+1<<'\n';
  }
  #ifdef _DEBUG
  for(int&i:acp)cout<<i<<' ';
  cout<<endl;
  for(int&i:bcp)cout<<i<<' ';
  cout<<endl;
  #endif
  return 0;
}
