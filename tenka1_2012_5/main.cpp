#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=1;i<128;i++){
		if(i%3==a&&i%5==b&&i%7==c)cout<<i<<'\n';
	}
	return 0;
}
