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
    vector<int>v(10);
    for(int&i:v)cin>>i;
    cout<<v[v[v[0]]]<<endl;
    return 0;
}
