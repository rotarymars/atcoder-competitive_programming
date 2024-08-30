#include <stdio.h>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
signed main()
{
    char tmp;
    int cnt=0;
    while(tmp=getc(stdin)){
        if(tmp!='\n')cnt++;
        else break;
    }
    for(;cnt;cnt--)putc('x',stdout);
    putc('\n',stdout);
    return 0;
}
