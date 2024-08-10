#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
bool is(string s){
	vector<char>v({'A','C','G','T'});
	for(char&i:s)
		if(find(v.begin(),v.end(),i)==v.end())return false;
	return true;
}
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	int ans=0;
	for(int i=0;i<s.size();i++)
		for(int j=1;j<=s.size()-i;j++){
			if(is(s.substr(i,j)))ans=max(ans,j);
		}
	cout<<ans<<endl;
	return 0;
}
