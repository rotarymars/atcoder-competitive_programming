#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
pair<int,int>find(vector<int>&v,int val){
    pair<int,int>ret{-1,-1};
    for(int i=0;i<v.size();i++){
        if(v[i]==val){
            if(ret.first==-1)ret.first=i;
            else ret.second=i;
        }
    }
    return ret;
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int>v(2*n);
    for(int&i:v)cin>>i;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(find(v,i).second-find(v,i).first==2)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
