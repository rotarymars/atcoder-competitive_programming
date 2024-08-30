#include <ios>
#include <iostream>
#include <iomanip>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	long double ans=0;
	for(;n;n--){
		long double tmp;
		cin>>tmp;
		ans+=1.0/tmp;
	}
	cout<<fixed<<setprecision(10);
	cout<<1.0/ans<<endl;
	return 0;
}
