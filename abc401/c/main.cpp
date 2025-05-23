#include <iostream>
#include <vector>
// #define _DEBUG
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long n,k;
  cin>>n>>k;
  if(k>n){
    cout<<1<<endl;
    return 0;
    
  }
  vector<long long>v(1+n);
  for(int i=0;i<k;++i){
    v[i]=1ll;
  }
  long long befsum=k;
  for(int i=k;i<=n;++i){
    #ifdef _DEBUG
    cout<<befsum<<endl;
    #endif
    v[i]=befsum;
    befsum-=v[i-k];
    if(befsum<0ll){
      befsum+=1'000'000'000ll;
    }
    befsum+=v[i];
    if(befsum>1'000'000'000ll){
      befsum-=1'000'000'000ll;
    }
  }
  cout<<v.back()<<endl;
  return 0;
}
