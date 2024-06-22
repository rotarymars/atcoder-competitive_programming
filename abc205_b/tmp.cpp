#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
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
    sort(v.begin(),v.end());
    vector<int>va(n);
    iota(va.begin(),va.end(),1);
    if(v==va)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
