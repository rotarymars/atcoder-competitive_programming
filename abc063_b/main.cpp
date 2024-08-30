#include <iostream>
#include <set>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	set<char>se;
	for(char&i:s)se.insert(i);
	if(s.size()==se.size())cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}
