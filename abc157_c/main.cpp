#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector<pair<int,int>>v(m);
  for(auto&i:v)cin>>i.first>>i.second;
  for(int i=0;i<1000;i++){
    string s=to_string(i);
    bool ok=true;
    for(auto&i:v){
      if(s[i.first-1]!=i.second+'0')ok=false;
    }
    if(ok==true&&to_string(i).size()==n){
      cout<<s<<endl;
      return 0;
    }
  }
  cout<<-1<<endl;
	return 0;
}

