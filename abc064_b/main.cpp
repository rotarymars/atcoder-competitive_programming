#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int>v(n);
	for(int&i:v)cin>>i;
	sort(v.begin(),v.end());
	cout<<v.back()-v.front()<<endl;
	return 0;
}
