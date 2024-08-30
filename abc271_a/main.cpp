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
    vector<char>v{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    cout<<v[n/16]<<v[n%16]<<endl;
    return 0;
}
