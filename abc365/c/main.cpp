#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  long long m;
  cin>>n>>m;
  vector<long long>v(n);
  for(auto&i:v){
    cin>>i;
  }
  if(accumulate(v.begin(),v.end(),0ll)<=m){
    cout<<"infinite\n";
    return 0;
  }
  long long left=0,right=1'000'000'000;
  while(right-left>1){
    long long mid=(left+right)/2;
    long long sum=0;
    for(auto&i:v){
      sum+=min(i,mid);
    }
    if(sum<=m){
      left=mid;
    }
    else{
      right=mid;
    }
  }
  cout<<left<<endl;
  return 0;
}
