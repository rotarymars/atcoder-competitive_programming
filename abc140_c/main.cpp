#include <iostream>
#include <numeric>
#include <climits>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n-1);
  for(int&i:v)cin>>i;
  vector<int>ans(n,INT_MAX);
  for(int i=0;i<n-1;i++){
    ans[i]=min(ans[i],v[i]);
    ans[i+1]=min(ans[i+1],v[i]);
  }
  cout<<accumulate(ans.begin(),ans.end(),0)<<endl;
	return 0;
}

