#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int sum=accumulate(a.begin(),a.end(),0);
  if(sum%n!=0){
    cout<<-1<<endl;
    return 0;
  }
  int ans=0;
  for(int i=0;i<n-1;i++){
    if(accumulate(a.begin(),a.begin()+i+1,0)==sum/n*(i+1)){
      continue;
    }
    ++ans;
  }
  cout<<ans<<endl;
  return 0;
}