#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<max(max(a*c,a*d),max(b*c,b*d))<<endl;
	return 0;
}
