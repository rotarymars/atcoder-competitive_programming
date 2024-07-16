#include <iostream>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<char>v;
	v.reserve(n);
	for(;n;n--){
		char tmp;
		cin>>tmp;
		if(!v.empty())if(v.back()==tmp)continue;
		v.push_back(tmp);
	}
	cout<<v.size()<<endl;
	return 0;
}
