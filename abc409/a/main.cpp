#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  char a[100],b[100];
  for(int i=0;i<n;++i){
    cin>>a[i];
  }
  for(int i=0;i<n;++i){
    cin>>b[i];
  }
  bool flag=false;
  for(int i=0;i<n;++i){
    if(a[i]==b[i]&&a[i]=='o')flag=true;
  }
  cout<<(flag?"Yes":"No")<<endl;
  return 0;
}
