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
    int n,p,q,r,s;
    cin>>n>>p>>q>>r>>s;
    vector<int>v(n);
    for(int&i:v)cin>>i;
    p--,q--,r--,s--;
    for(int i=p;i<=q;i++){
        swap(v[i],v[r+i-p]);
    }
    for(int i=0;i<n;i++)cout<<(i?" ":"")<<v[i];
    cout<<endl;
    return 0;
}
