#include <iostream>
#include <vector>
#include <utility>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,q;
  cin>>n>>q;
  vector<int>pigeons(n); // reference index
  vector<int>boxrealnumber(n);
  vector<int>getboxnumber(n); // boxrealnumber[getboxnumber[i]]=i;
  for(int i=0;i<n;++i){
    pigeons[i]=i;
    boxrealnumber[i]=i;
    getboxnumber[i]=i;
  }
  for(int i=0;i<q;++i){
    int t;
    cin>>t;
    if(t==1||t==2){
      int a,b;
      cin>>a>>b;
      --a,--b;
      if(t==1){
        pigeons[a]=getboxnumber[b];
      }
      else{
        swap(boxrealnumber[getboxnumber[a]],boxrealnumber[getboxnumber[b]]);
        swap(getboxnumber[a],getboxnumber[b]);
      }
    }
    else{
      int a;
      cin>>a;
      --a;
      cout<<boxrealnumber[pigeons[a]]+1<<'\n';
    }
  }
  return 0;
}
