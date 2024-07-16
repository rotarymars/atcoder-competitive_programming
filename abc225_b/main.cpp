#include <iostream>
#include <map>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	map<int,int>m;
	for(int i=1;i<n;i++){
		int a,b;
		cin>>a>>b;
		m[a]++;
		m[b]++;
	}
	for(auto[a,b]:m){
		if(b==n-1){
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
	return 0;
}
