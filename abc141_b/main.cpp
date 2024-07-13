#include <iostream>
#include <string>
using namespace std;
int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	bool ok=true;
	for(int i=0;i<s.size();i++){
		if((i+1)%2){
			if(!(s[i]=='R'||s[i]=='U'||s[i]=='D'))ok=false;
		}
		else{
			if(!(s[i]=='L'||s[i]=='U'||s[i]=='D'))ok=false;
		}
	}
	cout<<(ok?"Yes":"No")<<endl;
	return 0;
}
