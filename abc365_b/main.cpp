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
	vector c=v;
	sort(v.begin(),v.end());
	cout<<distance(c.begin(),find(c.begin(),c.end(),v[v.size()-2]))+1<<endl;
	return 0;
}
