#include <cctype>
#include <iostream>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	bool ok=true;
	if(!(isupper(s.front())&&isupper(s.back())))ok=false;
	string t=s.substr(1,6);
	if(!(t[0]>'0'))ok=false;
	for(int i=0;i<6;i++)if(!isdigit(t[i]))ok=false;
	cout<<(ok?"Yes":"No")<<endl;
	return 0;
}
