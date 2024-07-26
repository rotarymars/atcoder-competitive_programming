#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int calc(vector<int>&v,int x){
	int ret=0;
	for(int&i:v)ret+=(i-x)*(i-x);
	return ret;
}
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int ans=INT_MAX;
	vector<int>v(n);
	for(int&i:v)cin>>i;
	for(int i=-100;i<=100;i++){
		ans=min(ans,calc(v,i));
	}
	cout<<ans<<endl;
	return 0;
}
