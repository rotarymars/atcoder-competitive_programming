#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int h,m;
	cin>>h>>m;
	cout<<18*60-h*60-m<<endl;
	return 0;
}
