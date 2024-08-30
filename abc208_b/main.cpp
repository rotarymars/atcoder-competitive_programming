#include <iostream>
#include <template/arysystem.hpp>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
		int p;
		cin>>p;
		int a[11];
		a[0]=1;
		for(int i=1;i<=10;i++)a[i]=a[i-1]*i;
		int ans=0;
		for(int i=10;i>=1;i--){
			ans+=p/a[i];
			p%=a[i];
		}
		cout<<ans<<endl;
    return 0;
}
