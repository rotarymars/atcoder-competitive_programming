#include <iostream>
#include <vector>
using namespace std;
bool check(vector<int>*a,vector<int>*b,int*c){
	int ret=*c;
	for(int i=0;i<a->size();i++){
		ret+=(*a)[i]*(*b)[i];
	}
	return ret>0;
}
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n,m,c;
	cin>>n>>m>>c;
	vector<int>b(m);
	for(int&i:b)cin>>i;
	int cnt=0;
	for(;n;n--){
		vector<int>a(m);
		for(int&i:a)cin>>i;
		if(check(&a,&b,&c))cnt++;
	}
	cout<<cnt<<endl;
	return 0;
	}
