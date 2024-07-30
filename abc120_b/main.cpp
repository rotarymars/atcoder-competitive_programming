#include <iostream>
#include <algorithm>
#include <memory>
#include <template/gcd_lcm.hpp>
#include <template/enum_devisors.hpp>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int a,b,k;
	cin>>a>>b>>k;
	auto v=ENUM_DIVISORS(GCD(a,b));
	sort(v.begin(),v.end());
	cout<<v[v.size()-k]<<endl;
	return 0;
}
