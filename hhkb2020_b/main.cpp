#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	char v[100][100];
	int h,w;
	cin>>h>>w;
	for(int i=0;i<h;i++)for(int j=0;j<w;j++)cin>>v[i][j];
	int ans=0;
	for(int i=0;i<h;i++)for(int j=0;j<w;j++){
		if(i+1<h&&v[i][j]==v[i+1][j]&&v[i][j]=='.')ans++;
		if(j+1<w&&v[i][j]==v[i][j+1]&&v[i][j]=='.')ans++;
	}
	cout<<ans<<endl;
	return 0;
}
