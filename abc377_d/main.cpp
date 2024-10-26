#include <iostream>
#include <vector>
#include <utility>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector<pair<int,int>>v(n);
  for(auto&i:v)cin>>i.first>>i.second;
  sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b){
    return a.second>b.second;
  });
    auto easylowerbound = [&](int x) {
      int left=x,right=n-1;
      while(right-left>1){
        int mid=(left+right)/2;
        if()
  };
  long long ans=0;
  for(int i=1;i<=m;i++){
    ans+=easylowerbound(i)-v[i].first;
  }
  cout<<ans<<endl;
	return 0;
}

