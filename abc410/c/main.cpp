#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
#define int long long
int startpoint=0;
int n;
int compute_index(int x){
  return (x+startpoint)%n;
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int q;
  cin>>n>>q;
  vector<int>v(n);
  iota(v.begin(),v.end(),1);
  for(;q--;){
    int t,second;
    cin>>t>>second;
    if(t==1){
      int x;
      cin>>x;
      v[compute_index(--second)]=x;
    }
    else if(t==2){
      cout<<v[compute_index(--second)]<<endl;
    }
    else{
      startpoint+=second;
      startpoint%=n;
    }
  }
  return 0;
}
