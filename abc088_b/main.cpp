#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int>v(n);
	for(int&i:v)cin>>i;
	sort(v.begin(),v.end(),greater<int>());
	int ans=0;
	for(int i=0;i<n;i++){
		if(i%2)ans-=v[i];
		else ans+=v[i];
	}
	cout<<ans<<endl;
	return 0;
}
