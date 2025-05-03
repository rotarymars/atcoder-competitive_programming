#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  string s;
  cin>>n>>s;
  int ans=0;
  if(count(s.begin(),s.end(),'-')==0){
    cout<<-1<<endl;
    return 0;
  }
  int tmpcnt=0;
  for(int i=0;i<n;++i){
    if(s[i]=='-'){
      ans=max(ans,tmpcnt);
      tmpcnt=0;
    }
    else{
      ++tmpcnt;
    }
  }
  if(ans==0&&tmpcnt==0){
    cout<<-1<<endl;
  }
  else{
    cout<<max(tmpcnt,ans)<<endl;
  }
  return 0;
}
