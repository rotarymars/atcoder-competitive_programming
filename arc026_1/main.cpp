#include <iostream>
using namespace std;
int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n,a,b;
	cin>>n>>a>>b;
	int tmp=min(5,n);
	cout<<tmp*b+(n-tmp)*a<<endl;
	return 0;
}
