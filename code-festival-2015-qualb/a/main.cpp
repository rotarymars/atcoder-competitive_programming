#include <stdio.h>
using namespace std;
int main() {
  char tmp;
  while(tmp=getchar()){
    if(tmp=='\n')break;
    putchar(tmp);putchar(tmp);
  }
  putchar('\n');
  return 0;
}
