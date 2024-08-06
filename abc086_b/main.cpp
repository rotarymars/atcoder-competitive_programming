#include <iostream>
#include <string>
bool issquare(int a){
	for(int i=0;i*i<=a;i++){
		if(i*i==a)return true;
	}
	return false;
}
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s,t;
	cin>>s>>t;
	if(issquare(stoi(s+t)))cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
