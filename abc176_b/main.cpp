#include <iostream>
#include <string>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
		string s;
		cin>>s;
		int ans=0;
		for(char&i:s)ans+=i-'0';
		if(ans%9==0)cout<<"Yes\n";
		else cout<<"No\n";
    return 0;
}
