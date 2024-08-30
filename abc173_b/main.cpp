#include <iostream>
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
    int ac,wa,tle,re;
    ac=wa=tle=re=0;
    for(;n;n--){
        string s;
        cin>>s;
        if(s=="AC")ac++;
        if(s=="WA")wa++;
        if(s=="TLE")tle++;
        if(s=="RE")re++;
    }
    cout<<"AC x "<<ac<<"\n"<<"WA x "<<wa<<"\n"<<"TLE x "<<tle<<"\n"<<"RE x "<<re<<endl;
    return 0;
}
