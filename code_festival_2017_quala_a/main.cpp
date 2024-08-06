#include <iostream>
#include <string>
#include <regex>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	if(regex_match(s,regex("^YAKI.*")))cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}
