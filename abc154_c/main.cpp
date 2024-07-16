#include <iostream>
#include <set>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	set<int>se;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		se.insert(tmp);
	}
	if(se.size()!=n)cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	return 0;
}
