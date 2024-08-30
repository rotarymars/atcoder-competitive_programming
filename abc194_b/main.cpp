#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int a[1000],b[1000];
	for(int i=0;i<n;i++)cin>>a[i]>>b[i];
	int ans=INT_MAX;
	for(int i=0;i<n;i++)for(int j=0;j<n;j++){
		if(i==j)continue;
		ans=min(ans,max(a[i],b[j]));
	}
	for(int i=0;i<n;i++)ans=min(ans,a[i]+b[i]);
	cout<<ans<<endl;
	return 0;
}
