#include <cstdlib>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<pair<int,int>>v(n);
	for(auto&i:v)cin>>i.first>>i.second;
	int ans=0;
	for(int i=0;i<n;i++)for(int j=i+1;j<n;j++){
		if(abs(v[i].first-v[j].first)>=abs(v[i].second-v[j].second))ans++;
	}
	cout<<ans<<endl;
	return 0;
}
