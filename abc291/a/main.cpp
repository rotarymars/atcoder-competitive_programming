#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int cnt=0;
  while(true){
    char tmp=getchar();
    if((tmp^32)>tmp){
      cout<<cnt+1<<endl;
      return 0;
    }
    cnt++;
  }
  return 0;
}
