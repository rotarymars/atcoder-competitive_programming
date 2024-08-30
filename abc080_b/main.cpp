#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int tmp=0,ncopy=n;
	for(;n>0;){
		tmp+=n%10;
		n/=10;
	}
	cout<<(ncopy%tmp==0?"Yes":"No")<<endl;
	return 0;
}
