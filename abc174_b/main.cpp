#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long long n,d;
    cin>>n>>d;
    int ans=0;
    for(;n;n--){
        long long x,y;
        cin>>x>>y;
        if(x*x+y*y<=d*d)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
