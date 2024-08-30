#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int ans=-1,diff=c*d-b;
	if(diff>0)cout<<(a+diff-1)/diff<<endl;
	else cout<<ans<<endl;
	return 0;
}
