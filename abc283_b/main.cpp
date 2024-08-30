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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int&i:v)cin>>i;
    int q;
    cin>>q;
    for(;q;q--){
        int tmp;
        cin>>tmp;
        if(tmp==1){
            int k,x;
            cin>>k>>x;
            v[--k]=x;
        }
        else {
            int k;
            cin>>k;
            cout<<v[--k]<<"\n";
        }
    }
    return 0;
}
