#include <iostream>
#include <vector>
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
    vector<int>a(n),b(n);
    for(int&i:a)cin>>i;
    for(int&i:b)cin>>i;
    int sum=0;
    vector<int>c;
    c.resize(n);
    for(int i=0;i<n;i++)c[i]=a[i]*b[i];
    sum=accumulate(c.begin(),c.end(),0);
    DP(sum);
    cout<<(sum?"No\n":"Yes\n");
    return 0;
}
