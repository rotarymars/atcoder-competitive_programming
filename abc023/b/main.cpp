#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  vector<string>v;
  string nowstring="b";
  while(true){
    v.push_back(nowstring);
    if(nowstring.front()=='a'){
      nowstring.insert(nowstring.begin(),'c');
    }
    else if(nowstring.front()=='b'){
      nowstring.insert(nowstring.begin(),'a');
    }
    else if(nowstring.front()=='c'){
      nowstring.insert(nowstring.begin(),'b');
    }
    else{
      abort();
    }
    if(nowstring.back()=='a'){
      nowstring.push_back('b');
    }
    else if(nowstring.back()=='b'){
      nowstring.push_back('c');
    }
    else if(nowstring.back()=='c'){
      nowstring.push_back('a');
    }
    else{
      abort();
    }
    if((int)nowstring.size()>100){
      break;
    }
  }
  int n;
  string s;
  cin>>n>>s;
  if(find(v.begin(),v.end(),s)!=v.end()){
    cout<<distance(v.begin(),find(v.begin(),v.end(),s))<<endl;
  }
  else cout<<-1<<endl;
  return 0;
}
