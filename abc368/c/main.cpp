#include <iostream>
#include <vector>
using namespace std;
#define int long long
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;++i){
    cin>>a[i];
  }
  int T=0;
  for(int i=0;i<n;++i){
    int num=a[i]/5;
    T+=num*3;
    a[i]-=num*5;
    while(a[i]>0){
      T++;
      if(T%3==0){
        a[i]-=3;
      }
      else{
        a[i]-=1;
      }
    }
  }
  cout<<T<<endl;
  return 0;
}
