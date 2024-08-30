#include <iostream>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int>v(n);
	for(int&i:v)cin>>i;
	int ans=0;
	for(int i=0;i<n;i++){
		bool ok=true;
		for(int j=0;j<i;j++){
			if(v[i]>=v[j])continue;
			ok=false;
		}
		ans+=ok;
	}
	cout<<ans<<endl;
	return 0;
}

