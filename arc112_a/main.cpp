#include <iostream>
using namespace std;
long long calc(long long  l,long long r){
	return (l+r)*(r-l+1)/2;
}
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	for(;t;t--){
		long long l,r;
		cin>>l>>r;
		if(l>r-l)cout<<0<<'\n';
		else cout<<calc(1,r-2*l+1)<<'\n';
	}
	return 0;
}
