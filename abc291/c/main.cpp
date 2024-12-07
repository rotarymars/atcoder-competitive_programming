#include <iostream>
#include <string>
#include <set>
#include <utility>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  string s;
  cin>>n>>s;
  int x,y;
  x=y=0;
  set<pair<int,int>>se;
  se.insert(move(make_pair(x,y)));
  for(char&i:s){
    if(i=='R')x++;
    if(i=='L')x--;
    if(i=='U')y++;
    if(i=='D')y--;
    if(se.contains(make_pair(x,y))){
      cout<<"Yes"<<endl;
      return 0;
    }
    se.insert(make_pair(x,y));
  }
  cout<<"No"<<endl;
  return 0;
}
