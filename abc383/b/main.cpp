#include <iostream>
#include <set>
#include <utility>
#include <vector>
using namespace std;
int h,w,d;
int f(const vector<vector<char>>&v,int i,int j, int k, int l){
  if(v[i][j]!='.'||v[k][l]!='.')return -1;
  set<pair<int,int>>se;
  for(int m=0;m<h;m++){
    for(int n=0;n<w;n++){
      if(abs(i-m)+abs(j-n)<=d&&v[m][n]=='.')se.insert(make_pair(m,n));
      if(abs(k-m)+abs(l-n)<=d&&v[m][n]=='.')se.insert(make_pair(m,n));
    }
  }
  return (int)se.size();
}
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  cin>>h>>w>>d;
  vector<vector<char>>v(h,vector<char>(w));
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>>v[i][j];
    }
  }
  int ans=0;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      for(int k=0;k<h;k++){
        for(int l=0;l<w;l++){
          int temp=f(v,i,j,k,l);
          ans=max(ans,temp);
        }
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
