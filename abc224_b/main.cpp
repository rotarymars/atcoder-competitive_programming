#include <iostream>
#include <string>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int h,w;
	cin>>h>>w;
	vector<vector<int>>v(h,vector<int>(w));
	for(auto&i:v)for(auto&j:i)cin>>j;
	string ans="Yes";
	for(int i1=0;i1<h;i1++)for(int i2=i1+1;i2<h;i2++)for(int j1=0;j1<w;j1++)for(int j2=j1+1;j2<w;j2++){
		if(v[i1][j1]+v[i2][j2]<=v[i2][j1]+v[i1][j2])continue;
		ans="No";
	}
	cout<<ans<<endl;
	return 0;
}
