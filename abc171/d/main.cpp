#include <iostream>
#include <map>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  map<long long,long long>mp;
  for(int i=0;i<n;++i){
    int a;
    cin>>a;
    ++mp[a];
  }
  long long sum=0;
  for(auto&i:mp){
    sum+=i.first*i.second;
  }
  int q;
  cin>>q;
  for(int i=0;i<q;++i){
    long long b,c;
    cin>>b>>c;
    long long diff=c-b;
    sum+=diff*mp[b];
    mp[c]+=mp[b];
    mp[b]=0;
    cout<<sum<<'\n';
  }
  return 0;
}
