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
	int bef=-1,cnt,ans;
	cnt=ans=0;
	for(int i=0;i<n;i++){
		if(v[i]==bef)cnt++;
		else{
			ans+=cnt/2;
			bef=v[i];
			cnt=1;
		}
	}
	cout<<ans+cnt/2<<endl;
	return 0;
}
