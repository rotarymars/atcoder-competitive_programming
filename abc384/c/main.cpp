#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>v(5);
bool comp(string s,string t){
  int snum=0,tnum=0;
  for(int i='A';i<='E';++i){
    if(s.contains(i))snum+=v[i-'A'];
    if(t.contains(i))tnum+=v[i-'A'];
  }
  if(snum!=tnum)return snum>tnum;
  else return s<t;
}
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  for(auto&i:v)cin>>i;
  vector<string>list{
    "ABCDE",
"BCDE",
"ACDE",
"ABDE",
"ABCE",
"ABCD",
"CDE",
"BDE",
"ADE",
"BCE",
"ACE",
"BCD",
"ABE",
"ACD",
"ABD",
"ABC",
"DE",
"CE",
"BE",
"CD",
"AE",
"BD",
"AD",
"BC",
"AC",
"AB",
"E",
"D",
"C",
"B",
"A"
  };
  sort(list.begin(),list.end(),comp);
  for(auto&i:list){
    cout<<i<<'\n';
  }
  return 0;
}
