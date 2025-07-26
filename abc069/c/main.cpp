#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(int&i:v){
    cin>>i;
  }
  int c4=0,c2=0,c=0;
  for(int i=0;i<n;++i){
    if(v[i]%4==0){
      ++c4;
    }
    else if(v[i]%2==0){
      ++c2;
    }
    else{
      ++c;
    }
  }
  if(c4+1==c&&n==(c4+c)){
    cout<<"Yes"<<endl;
  }
  else if(c4<c){
    cout<<"No"<<endl;
  }
  else{
    cout<<"Yes"<<endl;
  }
  return 0;
}
