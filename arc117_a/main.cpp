#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int a,b;
	cin>>a>>b;
	vector<int>e(a+b);
	if(a>=b){
		for(int i=0;i<a;i++)e[i]=i+1;
		for(int i=a;i<a+b-1;i++)e[i]=-(i-a+1);
		for(int i=0;i<a+b-1;i++)e[a+b-1]-=e[i];
	}
	else{
		for(int i=0;i<a-1;i++)e[i]=i+1;
		for(int i=a;i<a+b;i++)e[i]=-(i-a+1);
		for(int i=0;i<a+b;i++)if(i!=a-1)e[a-1]-=e[i];
	}
	for(int i=0;i<a+b;i++)cout<<(i?" ":"")<<e[i];
	cout<<endl;
	return 0;
}
