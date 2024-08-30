#include <iostream>
#define int long long
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int ans=0;
	for(;n;n--){
		int a,b;
		cin>>a>>b;
		ans+=(a+b)*(b-a+1)/2;
	}
	cout<<ans<<endl;
	return 0;
}
