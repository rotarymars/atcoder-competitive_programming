#include <iostream>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<vector<char>>v(n,vector<char>(n));
	for(auto&i:v)for(auto&j:i)cin>>j;
	bool ok=true;
	for(int i=0;i<n;i++)for(int j=0;j<n;j++){
		if(i==j)continue;
		if(v[i][j]=='W')if(v[j][i]!='L')ok=false;
		if(v[i][j]=='L')if(v[j][i]!='W')ok=false;
		if(v[i][j]=='D')if(v[j][i]!='D')ok=false;
	}
	cout<<(ok?"correct":"incorrect")<<endl;
	return 0;
}
