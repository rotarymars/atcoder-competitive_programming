#include <stdio.h>
using namespace std;
signed main(){
	char tmp;
	while((tmp=getchar())!='\n'){
		if(tmp=='?')putchar('D');
		else putchar(tmp);
	}
	putchar('\n');
}
