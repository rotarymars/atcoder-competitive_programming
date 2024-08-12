#include <iostream>
#include <template/debugprint.hpp>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	string s;
	cin>>n>>s;
	string t="";
	for(int i=0;i<n;i++){
		if(s[i]=='A')t+="BB";
		else t+=s[i];
	}
	s=t;
	t="";
	DP(s);
	for(int i=0;i<s.size();i++){
		if(s[i]=='B'){
			int tmp=0;
			while(s[i]=='B'&&i<s.size())i++,tmp++;
			t+=string(tmp/2,'A');
			if(tmp%2)t+='B';
			DP(t);
			i--;
		}
		else t+=s[i];
	}
	cout<<t<<endl;
	return 0;
}
