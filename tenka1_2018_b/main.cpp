#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int mode=1;
	int a,b,k;
	cin>>a>>b>>k;
	for(;k;k--){
		if(mode==1){
			b+=a/2;
			a/=2;
		}
		else{
			a+=b/2;
			b/=2;
		}
		mode*=-1;
	}
	cout<<a<<' '<<b<<endl;
	return 0;
}
