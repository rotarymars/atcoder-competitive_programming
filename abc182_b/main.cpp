#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int>v(n);
	for(int&i:v)cin>>i;
	int a=*max_element(v.begin(),v.end());
	int ans=0,cnt=0;
	for(int i=2;i<=a;i++){
		int tmp=0;
		for(int j=0;j<n;j++){
			if(v[j]%i==0)tmp++;
		}
		if(cnt<tmp){
			cnt=tmp;
			ans=i;
		}
	}
	cout<<ans<<endl;	
	return 0;
}
