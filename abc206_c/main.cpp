#include <iostream>
#include <vector>
#include <map>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  long long n;
  cin>>n;
  vector<long long>v(n);for(long long&i:v)cin>>i;
  map<long long,long long>mp;
  for(long long&i:v)++mp[i];
  long long sum=n*(n-1)/2;
  for(auto&i:mp){
    sum-=i.second*(i.second-1)/2;
  }
  cout<<sum<<endl;
	return 0;
}

