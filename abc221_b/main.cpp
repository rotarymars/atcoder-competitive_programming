#include <iostream>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s,t;
	cin>>s>>t;
	if(s==t){
		cout<<"Yes"<<endl;
		return 0;
	}
	for(int i=1;i<s.size();i++){
		swap(t[i],t[i-1]);
		if(s==t){
			cout<<"Yes"<<endl;
			return 0;
		}
		else swap(t[i],t[i-1]);
	}
	cout<<"No\n";
	return 0;
}
