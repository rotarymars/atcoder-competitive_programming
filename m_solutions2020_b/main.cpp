#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int a,b,c,k;
	cin>>a>>b>>c>>k;
	for(;k>0;k--){
		if(!(a<b))b*=2;
		else if(!(b<c))c*=2;
	}
	cout<<(a<b&&b<c?"Yes":"No")<<endl;
	return 0;
}
