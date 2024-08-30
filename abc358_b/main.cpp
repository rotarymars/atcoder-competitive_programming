#include <iostream>
#include <vector>
#include <utility>
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
    int n,a;
    cin>>n>>a;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        if(v.empty()||v.back().second<=tmp)v.push_back({tmp,tmp+a});
        else v.push_back(make_pair(v.back().second,v.back().second+a));
    }
    for(auto [f,s]:v)cout<<s<<"\n";
    return 0;
}
