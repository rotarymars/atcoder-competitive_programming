#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
		int n,m;
		cin>>n>>m;
		set<int>se,see;
		for(;n;n--){
			int tmp;
			cin>>tmp;
			se.insert(tmp);
		}
		for(;m;m--){
			int tmp;
			cin>>tmp;
			see.insert(tmp);
		}
		vector<int>ans;
		for(auto i=se.begin();i!=se.end();i++){
			if(!see.contains(*i))ans.push_back(*i);
		}
		for(auto i=see.begin();i!=see.end();i++){
			if(!se.contains(*i))ans.push_back(*i);
		}
		sort(ans.begin(),ans.end());
		for(int i=0;i<ans.size();i++){
			if(i==0)[[unlikely]]cout<<ans[i];
			else cout<<' '<<ans[i];
		}
		cout<<endl;
    return 0;
}
