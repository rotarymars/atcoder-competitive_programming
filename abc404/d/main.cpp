#include <iostream>
#include <vector>
#include <unordered_set>
#include <climits>
using namespace std;
bool my_next_perm(vector<long long>&mylist){
  // ternary system
  int n=mylist.size();
  for(int i=0;i<n;i++){
    if(mylist[i]>=2){
      mylist[i]=0;
      continue;
    }
    ++mylist[i];
    break;
  }
  if(mylist==vector<long long>(n,0)){
    return false;
  }
  else {
    return true;
  }
}
#define int long long
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector<int>c(n);
  for(auto&i:c){
    cin>>i;
  }
  vector<unordered_set<int>>mp(n); // each zoo, animal count
  for(int i=0;i<m;i++){
    int k; // zoo cnt
    cin>>k;
    for(int j=0;j<k;j++){
      int a;
      cin>>a;
      --a;
      mp[a].insert(i);
    }
  }
  vector<int>mylist(n,0);
  int ans=LLONG_MAX;
  do {
    vector<int>animalcntlist(m,0);
    for(int i=0;i<n;i++){
      for(auto&j:mp[i]){
        animalcntlist[j]+=mylist[i];
      }
    }
    bool flag=true;
    for(auto&i:animalcntlist){
      if(i<2){
        flag=false;
        break;
      }
    }
    if(flag){
      int tmp=0;
      for(int i=0;i<n;i++){
        tmp+=c[i]*mylist[i];
      }
      ans=min(ans,tmp);
    }
  }while(my_next_perm(mylist));
  cout<<ans<<endl;
  return 0;
}
