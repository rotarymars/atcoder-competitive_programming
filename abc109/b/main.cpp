#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  string bef;
  cin>>bef;
  set<string>se;
  se.insert(bef);
  for(int i=0;i<n-1;++i){
    string s;
    cin>>s;
    if(s.front()==bef.back()&&!se.contains(s)){
      bef=s;
      se.insert(s);
    }
    else{
      cout<<"No"<<endl;
      return 0;
    }
  }
  cout<<"Yes"<<endl;
  return 0;
}
