#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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
    long long n,t;
    cin>>n>>t;
    string s;cin>>s;
    vector<long long>front,back;
    for(int i=0;i<n;i++){
        long long tmp;
        cin>>tmp;
        if(s[i]=='0')back.push_back(tmp);
        if(s[i]=='1')front.push_back(tmp);
    }
    sort(front.begin(),front.end());
    sort(back.begin(),back.end());
    #ifdef _DEBUG
    for(long long&i:front)cout<<i<<' ';
    cout<<endl;
    for(long long&i:back)cout<<i<<' ';
    cout<<endl;
    #endif
    long long ans=0;
    for(int i=0;i<front.size();i++){
        auto it=upper_bound(back.begin(),back.end(),front[i]),itt=upper_bound(back.begin(),back.end(),front[i]+2*t);
        ans+=distance(it,itt);
        DP(distance(it,itt));
    }
    cout<<ans<<endl;
    return 0;
}
