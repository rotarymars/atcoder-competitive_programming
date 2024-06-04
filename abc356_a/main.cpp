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
    int n,l,r;
    cin>>n>>l>>r;
    for(int i=1;i<=n;i++){
        if(i-1)cout<<' ';
        if(i!=l)cout<<i;
        else{
            int rcopy=r;
            while(rcopy!=l){
                cout<<rcopy<<' ';
                rcopy--;
            }
            cout<<rcopy;
            i=r;
        }
    }
    cout<<endl;
    return 0;
}
