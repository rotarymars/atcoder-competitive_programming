#include <iostream>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s;
	int n;
	cin>>s>>n;
	for(int i=0;i<s.size();i+=n)putc(s[i],stdout);
	putc('\n',stdout);
	return 0;
}
