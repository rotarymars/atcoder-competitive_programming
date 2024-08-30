#include <iostream>
#include <numeric>
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
    int n,k,m;
    cin>>n>>k>>m;
    vector<int>v(n-1);
    for(int&i:v)cin>>i;
    if(n*m-accumulate(v.begin(),v.end(),0)<=k)cout<<max(0,n*m-accumulate(v.begin(),v.end(),0))<<endl;
    else cout<<"-1\n";
    return 0;
}
