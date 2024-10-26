#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  string s;
  cin>>s;
  sort(s.begin(),s.end());
  if(s=="ABC")cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
	return 0;
}

