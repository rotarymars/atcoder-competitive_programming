#include <stdio.h>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
signed main()
{
    int ans=0;
    for(int i=0;i<6;i++)ans+=getc(stdin)-'0';
    putc(ans+'0',stdout);putc(10,stdout);
    return 0;
}
