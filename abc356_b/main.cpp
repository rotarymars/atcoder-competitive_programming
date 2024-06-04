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
    int n,m;
    cin>>n>>m;
    vector<int>a(m);
    for(int&i:a)cin>>i;
    for(;n;n--){
        for(int i=0;i<m;i++){
            int tmp;
            cin>>tmp;
            a[i]-=tmp;
        }
    }
    bool ok=true;
    for(int&i:a)if(i>0)ok=false;
    cout<<(ok?"Yes":"No")<<endl;
    return 0;
}
