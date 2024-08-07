#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	int a=1;
	for(;n;n--){
		if(k<a)a+=k;
		else a*=2;
	}
	cout<<a<<endl;
	return 0;
}
