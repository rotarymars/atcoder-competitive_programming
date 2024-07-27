#include <iostream>
#include <template/vectorio.hpp>
#include <template/debugprint.hpp>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int h,w;
	cin>>h>>w;
	vector<vector<char>>v(h,vector<char>(w));
	for(auto&i:v)for(char&j:i)cin>>j;
	for(int i=0;i<h;i++)for(int j=0;j<w-1;j++){
		if(v[i][j]==v[i][j+1]&&v[i][j]=='T')v[i][j]='P',v[i][j+1]='C';
		DP(v);
	}
	for(auto&i:v){
		for(char&j:i)cout<<j;
		cout<<'\n';
	}
	return 0;
}
