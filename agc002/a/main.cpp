#include <iostream>
#include <utility>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a,b;
  cin>>a>>b;
  if(a<=0&&0<=b){
    cout<<"Zero\n";
    goto end;
  }
  if(0<a&&a<=b){
    cout<<"Positive\n";
    goto end;
  }
  if((b-a+1)%2==0){
    cout<<"Positive\n";
    goto end;
  }
  else{
    cout<<"Negative\n";
    goto end;
  }
  abort();
  end:
  return 0;
}
