#include <cmath>
#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int x,y,z;
	cin>>x>>y>>z;
	if(y<0)x=-x,y=-y,z=-z;
	if(x<y)cout<<abs(x)<<endl;
	else{
		if(z>y)cout<<-1<<endl;
		else cout<<abs(z)+abs(x-z)<<endl;
	}
	return 0;
}
