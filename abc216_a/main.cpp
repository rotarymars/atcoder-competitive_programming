#include <iostream>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int x,y;
    scanf("%d.%d",&x,&y);
    if(0<=y&&y<=2)cout<<x<<'-'<<endl;
    else if(3<=y&&y<=6)cout<<x<<endl;
    else if(7<=y&&y<=9)cout<<x<<'+'<<endl;
    return 0;
}
