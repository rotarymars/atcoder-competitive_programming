#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n,t,a;
	cin>>n>>t>>a;
	if(n-t-a>abs(t-a))cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
	return 0;
}
