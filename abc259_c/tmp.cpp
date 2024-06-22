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
    string s,t;
    cin>>s>>t;
    vector<pair<char,int>>sv,tv;
    sv.push_back(make_pair(0,0));
    tv.push_back(make_pair(0,0));
    int cur=0;
    for(char&i:s){
        if(sv.back().first==i)sv.back().second++;
        else sv.emplace_back(make_pair(i,1));
    }
    for(char&i:t){
        if(tv.back().first==i)tv.back().second++;
        else tv.emplace_back(make_pair(i,1));
    }
    #ifdef _DEBUG
    for(auto [a,b]:sv)cout<<a<<' '<<b;
    cout<<endl;
    for(auto [a,b]:tv)cout<<a<<' '<<b;
    cout<<endl;
    #endif
    int ind=0;
    if(sv.size()!=tv.size()){
        cout<<"No\n";
        return 0;
    }
    for(int i=0;i<sv.size();i++){
        if(sv[i].first==tv[i].first){
            if(sv[i].second==tv[i].second)continue;
            if(sv[i].second>=2&&tv[i].second>sv[i].second)continue;
        }
        DP(i);
        cout<<"No\n";
        return 0;
    }
    cout<<"Yes\n";
    return 0;
}
