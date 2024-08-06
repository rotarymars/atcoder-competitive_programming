#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	for(int&i:v)cin>>i;
	sort(v.begin(),v.end());
	cout<<accumulate(next(v.begin(),n-k),v.end(),0)<<endl;
	return 0;
}
