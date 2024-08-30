#include <iostream>
#include <template/ispalindrome.hpp>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	cout<<(ISPALINDROME(s)?"YES":"NO")<<endl;
	return 0;
}
