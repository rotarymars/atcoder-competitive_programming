#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,k;
  cin>>n>>k;
  vector<int>v,w;
  for(int i=0;i<n;++i){
    int a;
    cin>>a;
    if(v.size()<15)v.push_back(a);
    else w.push_back(a);
  }
  set<int>sev,sew;
  for(int i=0;i<(1<<int(v.size()));++i){
    int temp=0;
    for(int j=0;j<int(v.size());++j){
      if(i&(1<<j))temp+=v[j];
    }
    sev.insert(temp);
  }
  for(int i=0;i<(1<<int(w.size()));++i){
    int temp=0;
    for(int j=0;j<int(w.size());++j){
      if(i&(1<<j))temp+=w[j];
    }
    sew.insert(temp);
  }
  for(auto&i:sew){
    if(sev.find(k-i)!=sev.end()){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;
  return 0;
}
