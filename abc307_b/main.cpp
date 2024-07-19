#include <iostream>
#include <template/ispalindrome.hpp>
#include <string>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<string>v(n);
	for(string&i:v)cin>>i;
	for(int i=0;i<n;i++)for(int j=0;j<n;j++){
		if(i==j)continue;
		string t=v[i];
		t+=v[j];
		if(ISPALINDROME(t)){
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
	return 0;
}
