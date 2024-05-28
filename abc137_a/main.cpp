#include <iostream>
#include <algorithm>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    cout<<max({a+b,a-b,a*b})<<endl;
    return 0;
}
