#include <iostream>
#include <vector>
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
    int h,w;
    cin>>h>>w;
    for(;h;h--){
        for(int i=0;i<w;i++){
            int tmp;
            cin>>tmp;
            cout<<(tmp==0?'.':(char)('A'+(--tmp)));
        }
        cout<<"\n";
    }
    return 0;
}
