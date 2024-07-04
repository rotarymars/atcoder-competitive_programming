#include <iostream>
#include <algorithm>
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
    vector<int>v(5*n);
    for(int&i:v)cin>>i;
    sort(v.begin(),v.end());
    long double ans=0;
    for(int i=n;i-n<3*n;i++)ans+=v[i];
    cout<<ans/((long double)(3*n))<<endl;
    return 0;
}
