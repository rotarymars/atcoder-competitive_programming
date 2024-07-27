#include <iostream>
#include <string>
#include <template/ispalindrome.hpp>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	if(ISPALINDROME(s)&&ISPALINDROME(s.substr(0,s.size()/2))&&ISPALINDROME(s.substr(s.size()/2+1,s.size()/2)))cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
