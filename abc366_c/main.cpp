#include <iostream>
#include <map>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int q;
	cin>>q;
	map<int,int>m;
	for(;q;q--){
		int t;
		cin>>t;
		if(t==1){
			int tmp;
			cin>>tmp;
			m[tmp]++;
		}
		else if(t==2){
			int tmp;
			cin>>tmp;
			m[tmp]--;
			if(m[tmp]==0)m.erase(tmp);
		}
		else cout<<m.size()<<'\n';
	}
	return 0;
}
