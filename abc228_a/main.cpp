#include <iostream>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
signed main() {
    int s,t,x;
    cin>>s>>t>>x;
    if(s<t)cout<<(s<=x&&x<t?"Yes":"No")<<endl;
    else cout<<(x<t||s<=x?"Yes":"No")<<endl;
}
