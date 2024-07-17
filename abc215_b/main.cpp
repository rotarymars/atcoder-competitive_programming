#include <iostream>
#include <limits.h>
#include <template/powmod.hpp>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	long long n;
	cin>>n;
	long long k=1;
	while(POWMOD(2ll,k,LLONG_MAX)<=n)k++;
	cout<<--k<<endl;
	return 0;
}

