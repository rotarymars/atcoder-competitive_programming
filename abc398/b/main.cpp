#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  vector<int>v(7);
  for(auto&i:v){
    cin>>i;
  }
  sort(v.begin(),v.end());
  for(int i=0;i<7;++i){
    for(int j=i+1;j<7;++j){
      for(int k=j+1;k<7;++k){
        for(int l=k+1;l<7;++l){
          for(int m=l+1;m<7;++m){
            if((v[i]==v[j]&&v[k]==v[l]&&v[l]==v[m]&&v[i]!=v[k])||(v[i]==v[j]&&v[j]==v[k]&&v[l]==v[m]&&v[i]!=v[l])){
              cout<<"Yes"<<endl;
              return 0;
            }
          }
        }
      }
    }
  }
  cout<<"No"<<endl;
  return 0;
}
