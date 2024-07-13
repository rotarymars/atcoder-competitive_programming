#include <iostream>
#include <limits.h>
#include <template/debugprint.hpp>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	long long n,m;
	cin>>n>>m;
	vector<long long>a(n);
	for(long long&i:a)cin>>i;
	vector<pair<pair<long long,long long>,long long>>v(m);
	for(auto&i:v)cin>>i.first.first>>i.first.second>>i.second;
	for(auto&i:v)i.first.first--,i.first.second--;
	vector<long long>ans(n,INT_MAX);
	ans[0]=a[0];
	queue<long long>que;
	que.push(0);

	while(!que.empty()){
		long long now=que.front();
		que.pop();
		auto it=lower_bound(v.begin(),v.end(),make_pair(make_pair(now,0ll),0ll));
		for(;it->first.first==now;it++){
#ifdef _DEBUG
			for(int i=0;i<que.size();i++){
				cout<<que.front()<<' ';
				que.push(que.front());
				que.pop();
			}
			cout<<endl;
#endif
			if(ans[it->first.second]>ans[now]+it->second+a[it->first.second]){
				que.push(it->first.second);
				ans[it->first.second]=ans[now]+it->second+a[it->first.second];
			}
		}
	}
	for(int i=1;i<n;i++){
		if(i==1)cout<<ans[i];
		else cout<<' '<<ans[i];
	}
	cout<<endl;
	return 0;
}

