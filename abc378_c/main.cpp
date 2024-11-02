#include <iostream>
#include <map>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>ans(n,-1);
  map<int,int>bef;
  for(int i=0;i<n;i++){
    int tmp;
    cin>>tmp;
    if(bef.contains(tmp)){
      ans[i]=bef[tmp];
    }
    bef[tmp]=i+1;
  }
  for(int i=0;i<n;i++){
    if(i==0)[[unlikely]]cout<<ans[i];
    else cout<<' '<<ans[i];
  }
  cout<<endl;
	return 0;
}

