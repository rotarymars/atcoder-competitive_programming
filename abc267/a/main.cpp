#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  vector<string>v{
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
  };
  cout<<distance(find(v.begin(),v.end(),s),v.end())-1<<endl;
  return 0;
}
