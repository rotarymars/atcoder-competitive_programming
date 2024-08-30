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
    cin>>s>>s;
    bool already=false,yes=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='|'&&!already)already=true;
        else if(s[i]=='|'&&already)break;
        if(already)if(s[i]=='*')yes=true;
    }
    yes?(cout<<"in"<<endl):(cout<<"out"<<endl);
    return 0;
}
