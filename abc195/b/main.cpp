#include <iostream>
#include <cmath>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long double a,b,n;
  cin>>a>>b>>n;
  n*=1000;
  int upper=floor(n/a),lower=ceil(n/b);
  if(lower>upper)cout<<"UNSATISFIABLE"<<endl;
  else cout<<lower<<' '<<upper<<endl;
  return 0;
}
