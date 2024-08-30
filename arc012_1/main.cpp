#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	vector<string>v{"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	if(s=="Saturday"||s=="Sunday")cout<<0<<endl;
	else cout<<distance(find(v.begin(),v.end(),s),find(v.begin(),v.end(),"Saturday"))<<endl;
	return 0;
}
