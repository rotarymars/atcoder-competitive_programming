#include <iostream>
using namespace std;
int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int x,y;
	cin>>x>>y;
	for(int i=0;i<101;i++)for(int j=0;j<101;j++){
		if(i+j==x&&2*i+4*j==y){
			cout<<"Yes\n";
			return 0;
		}
	}
	cout<<"No\n";
	return 0;
}
