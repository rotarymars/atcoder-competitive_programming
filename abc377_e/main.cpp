#include <iostream>
#include <set>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  int n;
  long long k;
  cin>>n>>k;
  vector<int>v(n);
  for(auto&i:v)cin>>i;
  vector<vector<int>>cycle;
  cycle.push_back(v);
  set<vector<int>>s;
  s.insert(v);
  for(;;){
    vector<int>cp(n);
    for(int j=0;j<n;j++){
      cp[j]=v[v[j]-1];
    }
    if(s.contains(cp))break;
    cycle.push_back(cp);
    s.insert(cp);
    v=cp;
  }
  k%=s.size();
  for(int i=0;i<n;i++){
    if(i==0)[[unlikely]]cout<<cycle[k][i];
    else cout<<' '<<cycle[k][i];
  }
  cout<<endl;
	return 0;
}

