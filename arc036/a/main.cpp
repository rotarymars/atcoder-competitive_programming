#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,k;
  cin>>n>>k;
  int a,b;
  int sum=0;
  cin>>a;
  sum+=a;
  cin>>b;
  sum+=b;
  int c;
  for(int i=2;i<n;i++){
    cin>>c;
    sum+=c;
    if(sum<k){
      cout<<1+i<<endl;
      return 0;
    }
    sum-=a;
    a=b;
    b=c;
  }
  cout<<-1<<endl;
  return 0;
}
