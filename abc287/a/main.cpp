#include <iostream>
#include <string>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int cnt=0;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    if(s=="For")cnt++;
    else cnt--;
  }
  if(cnt>0)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
