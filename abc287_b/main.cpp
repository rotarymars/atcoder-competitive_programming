#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    vector<string>s,t;
    s.reserve(n);t.reserve(m);
    for(;n;n--){
        string tmp;
        cin>>tmp;
        s.emplace_back(tmp.substr(tmp.size()-3,3));
    }
    for(;m;m--){
        string tmp;
        cin>>tmp;
        t.emplace_back(tmp);
    }
    int ans=0;
    for(string&i:s){
        if(find(t.begin(),t.end(),i)!=t.end())ans++;
    }
    cout<<ans<<endl;
    #ifdef _DEBUG
    for(string&i:s)cout<<i<<' ';
    cout<<endl;
    for(string&i:t)cout<<i<<' ';
    cout<<endl;
    #endif
    return 0;
}
