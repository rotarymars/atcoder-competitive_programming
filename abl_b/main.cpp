#include <iostream>
using namespace std;
#define int long long
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);    
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(max(a,c)<=min(b,d))cout<<"Yes\n";
		else cout<<"No\n";
    return 0;
}
