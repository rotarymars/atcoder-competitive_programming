#include <iostream>
#include <template/vectorio.hpp>
#include <template/debugprint.hpp>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		int appendint=0b0;
		for(int i=0;i<m;i++){
			if(s[i]=='o'){
				appendint|=(1<<(m-i-1));
			}
		}
		v[i]=appendint;
	}
	DP(v);
	int ans=0;
	for(int i=0;i<n;i++)for(int j=i+1;j<n;j++){
		if((v[i]|v[j])==(1<<m)-1)ans++;
	}
	cout<<ans<<endl;
	return 0;
}
