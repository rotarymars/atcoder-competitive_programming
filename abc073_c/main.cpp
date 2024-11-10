#include <iostream>
#include <set>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  set<int>se;
  int n;
  cin>>n;
  for(;n;n--){
    int a;
    cin>>a;
    if(se.contains(a))se.erase(a);
    else se.insert(a);
  }
  cout<<se.size()<<endl;
	return 0;
}

