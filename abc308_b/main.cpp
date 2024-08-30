#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <utility>
using namespace std;
int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	vector<string>v(n);
	for(string&i:v)cin>>i;
	vector<pair<string,int>>vv(m);
	int defaultprice,ans=0;
	vector<string>d(m);
	for(string&i:d)cin>>i;
	cin>>defaultprice;
	vector<int>p(m);
	for(int&i:p)cin>>i;
	for(string&i:v){
		if(find(d.begin(),d.end(),i)!=d.end())ans+=p[distance(d.begin(),find(d.begin(),d.end(),i))];
		else ans+=defaultprice;
	}
	cout<<ans<<endl;
	return 0;
}
