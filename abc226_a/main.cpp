#include <iostream>
#include <iomanip>
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
    int idx;
    for(int i=0;i<s.size();i++)if(s[i]=='.')idx=i;
    int n=stoi(s.substr(0,idx));
    if(s[idx+1]>='5')n++;
    cout<<n<<endl;
    return 0;
}
