#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	if(n>888)cout<<999<<endl;
	else if(n>777)cout<<888<<endl;
	else if(n>666)cout<<777<<endl;
	else if(n>555)cout<<666<<endl;
	else if(n>444)cout<<555<<endl;
	else if(n>333)cout<<444<<endl;
	else if(n>222)cout<<333<<endl;
	else if(n>111)cout<<222<<endl;
	else cout<<111<<endl;
	return 0;
}
