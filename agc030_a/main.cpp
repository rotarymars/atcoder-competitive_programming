#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	long long a,b,c;
	cin>>a>>b>>c;
	if(a+b+1>=c)cout<<b+c<<endl;
	else cout<<a+2*b+1<<endl;
	return 0;
}
