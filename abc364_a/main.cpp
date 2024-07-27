#include <iostream>
#include <template/debugprint.hpp>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	string before="";
	for(;n;n--){
		string tmp;
		cin>>tmp;
		if(tmp=="sweet"&&before=="sweet"&&n!=1){
			cout<<"No"<<endl;
			return 0;
		}
		before=tmp;
		DP(tmp);
		DP(before);
	}
	cout<<"Yes"<<endl;
	return 0;
}
