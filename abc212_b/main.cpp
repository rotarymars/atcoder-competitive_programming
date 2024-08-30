#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	char a[4];
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	a[0]-='0';
	a[1]-='0';a[2]-='0';a[3]-='0';
	string ans="Strong";
	if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])ans="Weak";
	if(a[1]==(a[0]+1)%10&&a[2]==(a[1]+1)%10&&a[3]==(a[2]+1)%10)ans="Weak";
	cout<<ans<<endl;
	return 0;
}
