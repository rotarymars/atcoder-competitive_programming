#include <iostream>
#include <set>
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
    set<int>s;
    int a[5];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    s.insert(a[0]);
    s.insert(a[1]);
    s.insert(a[2]);
    s.insert(a[3]);
    s.insert(a[4]);
    cout<<s.size()<<endl;
    return 0;
}
