#include <iostream>
#include <set>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	set<int>se;
	for(int i=0;i<n;i++)se.insert(i);
	for(;k;k--){
		int d;
		cin>>d;
		for(;d;d--){
			int a;
			cin>>a;
			a--;
			if(se.contains(a))se.erase(a);
		}
	}
	cout<<se.size()<<endl;
	return 0;
}
