#include <iostream>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	vector<vector<bool>>v(100,vector<bool>(100));
	int n;
	cin>>n;
	for(;n;n--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		for(int i=a;i<b;i++)for(int j=c;j<d;j++)v[i][j]=true;
	}
	int ans=0;
	for(int i=0;i<100;i++)for(int j=0;j<100;j++)if(v[i][j])ans++;
	cout<<ans<<endl;
	return 0;
}
