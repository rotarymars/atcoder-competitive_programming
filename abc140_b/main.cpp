#include <iostream>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int>a(n),b(n),c(n-1);
	for(int&i:a)cin>>i,i--;
	for(int&i:b)cin>>i;
	for(int&i:c)cin>>i;
	int ans=0,prev=-2;
	for(int i=0;i<n;i++){
		ans+=b[i];
		if(prev+1==a[i])ans+=c[prev];
		prev=a[i];
	}
	cout<<ans<<endl;
	return 0;
}
