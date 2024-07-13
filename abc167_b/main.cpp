#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int a,b,c,k;
	cin>>a>>b>>c>>k;
	int now=0;
	if(a>k){
		cout<<k<<endl;
		return 0;
	}
	now+=a;
	k-=a;
	if(b>k){
		cout<<now<<endl;
		return 0;
	}
	k-=b;
	cout<<now-k*1<<endl;
	return 0;
}
