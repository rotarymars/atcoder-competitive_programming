#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	cout<<s.front()<<s.size()-2<<s.back()<<endl;
	return 0;
}
