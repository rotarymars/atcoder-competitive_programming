#include <iostream>
#include <template/debugprint.hpp>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	long long n,x,y;
	cin>>n>>x>>y;
	vector<pair<long long,long long>>v(n);
	for(auto&i:v)cin>>i.first;
	for(auto&i:v)cin>>i.second;
	sort(v.begin(),v.end(),[](pair<long long,long long>p,pair<long long,long long>pp){
			return p.first>pp.first;
			}
			);
	long long ans=-1,tmp=0;
#ifdef _DEBUG
	cout<<"FIRST"<<endl;
	for(auto i:v)cout<<i.first<<' '<<i.second<<endl;
#endif
	for(long long i=0;i<n;i++){
		tmp+=v[i].first;
		DP(tmp);
		if(tmp>x){
			ans=i+1;
			break;
		}
	}
	if(ans==-1)ans=n;
	sort(v.begin(),v.end(),[](pair<long long,long long>p,pair<long long,long long>pp){
			return p.second>pp.second;
			}
			);
#ifdef _DEBUG
	cout<<"SECOND"<<endl;
	for(auto i:v)cout<<i.first<<' '<<i.second<<endl;
#endif
	tmp=0;
	for(long long i=0;i<n;i++){
		tmp+=v[i].second;
		DP(tmp);
		if(tmp>y){
			DP(tmp);
			cout<<min(ans,i+1ll)<<endl;
			return 0;
		}
	}
	DP("end");
	cout<<min(n,ans)<<endl;
	return 0;
}
