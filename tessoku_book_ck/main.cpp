#include <iostream>
#include <iomanip>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
long double f(long double x){
    return x*x*x+x;
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long double n;
    cin>>n;
    double l=0,r=100,two=2,m;
    for(int i=0;i<50;i++){
        m=(l+r)/two;
        long double v=f(m);
        if(v>n)r=m;
        else l=m;
    }
    cout<<fixed<<setprecision(10)<<m<<endl;
    return 0;
}
