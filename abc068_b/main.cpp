#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int ans=1;
	while(ans<=n)ans<<=1;
	ans>>=1;
	cout<<ans<<endl;
	return 0;
}
