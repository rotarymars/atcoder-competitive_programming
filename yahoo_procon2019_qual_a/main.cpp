#include <iostream>
#include <template/rud.hpp>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	cout<<(RUD(n, 2)>=m?"YES":"NO")<<endl;
	return 0;
}
