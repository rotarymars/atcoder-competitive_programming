#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,h,w,ans;
    cin>>n>>h>>w;
    ans=n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a<h||b<w)ans--;
    }
    cout<<ans<<endl;
    return 0;
}
