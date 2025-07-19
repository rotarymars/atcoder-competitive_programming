#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  string ans="";
  long long sum=0;
  for(int i=0;i<n;i++){
    char c;
    long long l;
    cin>>c>>l;
    if(sum+l>100){
      cout<<"Too Long"<<endl;
      return 0;
    }
    sum+=l;
    ans+=string(l,c);
  }
  cout<<ans<<endl;
  return 0;
}