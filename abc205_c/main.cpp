#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);    
		int a,b,c;
		cin>>a>>b>>c;
		int ac_minus = c%2==1&&a<0;
	int bc_minus = c%2==1&&b<0;
	
	if(ac_minus!=bc_minus){
		if(ac_minus)puts("<");
		else puts(">");
	}else{
		if(abs(a)==abs(b))puts("=");
		else if(abs(a)<abs(b) ^ ac_minus)puts("<");
		else puts(">");
	}
   return 0;
}
