#include <iostream>
#include <type_traits>
#include <type_traits>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int a,b,c,d;
	a=b=c=d=-1;
	vector<string>v(10);
	for(string&i:v)cin>>i;
	for(int i=0;i<10;i++)for(int j=0;j<10;j++){
		if(v[i][j]=='#'){
			a=i+1,c=j+1;
			break;
		}
	}
	for(int i=9;i>=0;i--)for(int j=9;j>=0;j--){
		if(v[i][j]=='#'){
			b=i+1,d=j+1;
			break;
		}
	}
	swap(a,b);
	cout<<a<<' '<<b<<"\n"<<c<<' '<<d<<endl;
	return 0;
}
