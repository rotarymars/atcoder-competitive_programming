#include <algorithm>
#include <template/debugprint.hpp>
#include <template/ispalindrome.hpp>
#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	int ans=0;
	do{
		bool ok=true;
		for(int i=0;i<s.size()-k+1;i++){
			if(ISPALINDROME(s.substr(i,k))){
				ok=false;
				DP(s);
			}
		}
		ans+=ok;
		//if(ok)DP(s);
	}while(next_permutation(s.begin(),s.end()));
	cout<<ans<<endl;
	return 0;
}
