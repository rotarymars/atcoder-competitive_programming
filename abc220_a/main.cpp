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
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=a;i<=b;i++)if(i%c==0){
        cout<<i<<endl;
        return 0;
    }
    cout<<-1<<endl;
    return 0;
}
