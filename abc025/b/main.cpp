#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,a,b;
  cin>>n>>a>>b;
  string s;
  int d;
  int sum=0;
  for(int i=0;i<n;i++){
    cin>>s>>d;
    if(s=="East"){
      sum+=min(b,max(a,d));
    }else{
      sum-=min(b,max(a,d));
    }
  }
  if(sum>0){
    cout<<"East "<<sum<<endl;
  }else if(sum<0){
    cout<<"West "<<-sum<<endl;
  }else{
    cout<<0<<endl;
  }
  return 0;
}