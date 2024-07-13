#include <iostream>
#include <vector>
using namespace std;
int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int>v(n);
	for(int&i:v)cin>>i;
	int ans=0;
	for(int i=2;i<v.size();i++){
		if(v[i-2]<v[i-1]&&v[i-1]<v[i])ans++;
		if(v[i]<v[i-1]&&v[i-1]<v[i-2])ans++;
	}
	cout<<ans<<endl;
	return 0;
}
