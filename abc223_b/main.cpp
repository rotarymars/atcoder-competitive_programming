#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	vector<string>v;
	for(int i=0;i<s.size();i++){
		string tmp="";
		for(int j=0;j<s.size();j++){
			tmp+=s[(i+j)%s.size()];
		}
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	cout<<v.front()<<'\n'<<v.back()<<endl;
	return 0;
}
