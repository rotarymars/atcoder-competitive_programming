#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int a,b,c;
	cin>>a>>b>>c;
	a-=c;
	cout<<a/(b+c)<<endl;
	return 0;
}
