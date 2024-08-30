#include <iostream>
#include <template/rud.hpp>
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
    cin>>x>>y;
    if(x>=y)cout<<"0\n";
    else cout<<RUD(y-x,10)<<endl;
    return 0;
}
