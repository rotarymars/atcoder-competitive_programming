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
    for(char&i:s)if(i>='A'&&i<='Z')cnt++;
    if(2*cnt>=s.size()){
        for(char&i:s)if(i>='a'&&i<='z')i+='A'-'a';
    }else{
        for(char&i:s)if(i>='A'&&i<='Z')i-='A'-'a';
    }
    cout<<s<<endl;
    return 0;
}
