#include <iostream>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<=n;i++){
		s+='-';
		for(int j=1;j<=9;j++){
			if(n%j==0&&i%(n/j)==0){
				s[i]=j+'0';
				break;
			}
		}
	}
	cout<<s<<endl;
	return 0;
}
