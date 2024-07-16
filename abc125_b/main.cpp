#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int v[100],c[100];
	for(int i=0;i<n;i++)cin>>v[i];
	for(int i=0;i<n;i++)cin>>c[i];
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=max(v[i]-c[i],0);
	}
	cout<<ans<<endl;
	return 0;
}
