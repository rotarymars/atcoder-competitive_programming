#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int h,w;
	cin>>h>>w;
	cout<<(h-1)*w+h*(w-1)<<endl;
	return 0;
}
