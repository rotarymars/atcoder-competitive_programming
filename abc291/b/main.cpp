#include <iostream>
#include <set>
#include <iomanip>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  multiset<int>se;
  for(int i=0;i<5*n;i++){
    int a;
    cin>>a;
    se.insert(a);
  }
  for(int i=0;i<n;i++)se.erase(se.begin());
  for(int i=0;i<n;i++)se.erase(prev(se.end()));
  long double ans=0;
  for(auto&i:se)ans+=i;
  cout<<ans/(long double)(3*n)<<endl;
  return 0;
}
