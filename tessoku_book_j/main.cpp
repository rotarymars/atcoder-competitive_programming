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
    vector<int>a(n);
    for(int&i:a)cin>>i;
    int d;
    cin>>d;
    vector<int>l(d),r(d);
    for(int i=0;i<d;i++)cin>>l[i]>>r[i];
    for(int i=0;i<d;i++)l[i]--,r[i]--;
    vector<int>p(n),q(n);
    p[0]=a[0];
    q[n-1]=a[n-1];
    for(int i=1;i<n;i++)p[i]=max(p[i-1],a[i]);
    for(int i=n-2;i>=0;i--)q[i]=max(q[i+1],a[i]);
    #ifdef _DEBUG
    for(int&i:p)cout<<i<<' ';
    cout<<endl;
    for(int&i:q)cout<<i<<' ';
    cout<<endl;
    #endif
    for(int i=0;i<d;i++){
        int a=(l[i]!=0?l[i]-1:0),b=(r[i]!=d-1?r[i]+1:d-1);
        #ifdef _DEBUG
        cout<<a<<' '<<b<<endl;
        #endif
        cout<<max(p[a],q[b])<<"\n";
    }
    return 0;
}
