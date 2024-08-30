#include <iostream>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
int f(int a){
    if(a==0)return 1;
    else return a*f(a-1);
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}
