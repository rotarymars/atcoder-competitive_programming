#include <iostream>
#include <template/rud.hpp>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n,d,x;
	cin>>n>>d>>x;
	for(;n;n--){
		int a;
		cin>>a;
		x+=RUD(d,a);
	}
	cout<<x<<endl;
	return 0;
}
