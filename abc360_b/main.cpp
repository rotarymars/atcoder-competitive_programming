#include <iostream>
#include <vector>
#include <string>
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
    string s, t;
    cin >> s >> t;
    int w=1;
    for(int i=0;i<s.size();i++){
        for(w=1;w<s.size();w++){
            string tmp("");
            int nowind=i;
            if(i>=w)continue;
            while(nowind<s.size()){
                tmp+=s[nowind];
                nowind+=w;
            }
            DP(tmp);
            DP(i);
            DP(w);
            if(tmp==t){
                cout<<"Yes\n";
                return 0;
            }
        }
    }
    cout<<"No\n";
    return 0;
}
