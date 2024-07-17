#include <stdio.h>
signed main(){
	char tmp;
	while(tmp=getchar()){
		if(tmp=='\n')break;
		else putchar(tmp),putchar(tmp);
	}
	putchar('\n');
	return 0;
}
