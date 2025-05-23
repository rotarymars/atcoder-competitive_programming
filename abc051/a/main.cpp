#include <stdio.h>
using namespace std;
int main() {
  char tmp;
  while(tmp=getchar()){
    if(tmp==',')putchar(' ');
    else putchar(tmp);
    if(tmp=='\n')break;
  }
  return 0;
}
