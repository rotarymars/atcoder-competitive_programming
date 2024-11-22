#include <iostream>
#include <map>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  string s;
  cin>>s;
  map<char,int>mp;
  if(s.size()%2==1){
    cout<<"No\n";
    return 0;
  }
  for(int i=0;i<s.size()/2;i++){
    if(s[i*2]!=s[i*2+1]){
      cout<<"No\n";
      return 0;
    }
  }
  for(char i:s)mp[i]++;
  for(auto i:mp)if(!(i.second==0||i.second==2)){
    cout<<"No\n";
    return 0;
  }
  cout<<"Yes\n";
  return 0;
	return 0;
}

