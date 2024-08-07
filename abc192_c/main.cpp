#include <iostream>
#include <algorithm>
using namespace std;
long long g1(long long n){
	string s=to_string(n);
	sort(s.begin(),s.end());
	reverse(s.begin(),s.end());
	return stoll(s);
}
long long g2(long long n){
	string s=to_string(n);
	sort(s.begin(),s.end());
	return stoll(s);
}
long long f(long long a){
	return g1(a)-g2(a);
}
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	long long n;
	int k;
	cin>>n>>k;
	long long before=n;
	for(;k;k--)before=f(before);
	cout<<before<<endl;
	return 0;
}
