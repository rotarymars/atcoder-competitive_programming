#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n,x;
	cin>>n>>x;
	vector<int>l(n);
	for(int&i:l)cin>>i;
	for(int i=1;i<n;i++)l[i]=l[i-1]+l[i];
	auto it=lower_bound(l.begin(),l.end(),x);
	if(*it==x){
		cout<<distance(l.begin(),it)+2<<endl;
	}
	else cout<<distance(l.begin(),it)+1<<endl;
	return 0;
}
