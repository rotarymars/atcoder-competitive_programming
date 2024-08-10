#include <iostream>
#include <set>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	string a,b,c;
	cin>>n>>a>>b>>c;
	int ans=0;
	for(int i=0;i<n;i++){
		set<char>se;
		se.insert(a[i]),se.insert(b[i]),se.insert(c[i]);
		ans+=se.size()-1;
	}
	cout<<ans<<endl;
	return 0;
}
