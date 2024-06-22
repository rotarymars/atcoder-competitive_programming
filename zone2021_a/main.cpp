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
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<=8;i++){
        if(s.substr(i,4)=="ZONe")cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
