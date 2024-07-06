#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,a,b;
    cin>>n>>a>>b;
    cout<<min(a,b)<<' '<<max(0,a+b-n)<<endl;
    return 0;
}
