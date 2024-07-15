#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	set<string>se;
	for(int i=0;i<n;i++){
		string tmp;
		cin>>tmp;
		se.insert(tmp);
	}
	if(se.size()!=n){
		cout<<"No\n";
		return 0;
	}
	string list="A23456789TJQK"s;
	for(auto i=se.begin();i!=se.end();i++){
		bool ok=true;
		if(!((*i)[0]=='H'||(*i)[0]=='D'||(*i)[0]=='C'||(*i)[0]=='S'))ok=false;
		if(!(find(list.begin(),list.end(),(*i)[1])!=list.end()))ok=false;
		if(!ok){
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;
	return 0;
}
