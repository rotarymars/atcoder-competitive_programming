#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int r,g,b;
	cin>>r>>g>>b;
	string s;
	cin>>s;
	if(s=="Red")cout<<min(g,b);
	else if(s=="Green")cout<<min(r,b);
	else cout<<min(r,g);
	cout<<endl;
	return 0;
}
