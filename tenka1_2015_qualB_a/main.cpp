#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  int a,b,c;
  a=b=100;
  c=200;
  for(int i=0;i<17;i++){
    int temp=a+b+c;
    a=b;
    b=c;
    c=temp;
  }
  cout<<c<<endl;
	return 0;
}

