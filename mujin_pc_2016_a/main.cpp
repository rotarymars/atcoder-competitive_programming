#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	char c;
	cin>>c;
	string s="OPKL"s;
	if(find(s.begin(),s.end(),c)!=s.end())cout<<"Right"<<endl;
	else cout<<"Left"<<endl;
	return 0;
}

