#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	bool yes=false;
	if(n%4==0)yes=true;
	if(n%100==0)yes=false;
	if(n%400==0)yes=true;
	cout<<(yes?"YES":"NO")<<endl;
	return 0;
}
