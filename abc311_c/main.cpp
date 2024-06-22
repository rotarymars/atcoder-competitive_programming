#include <set>
#include <algorithm>
#include <iostream>
#include <vector>
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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int&i:a)cin>>i;
    for(int&i:a)--i;
    int now=0;
    set<int>se({now});
    vector<int>v;
    v.reserve(1e5);
    v.push_back(now);
    for(;;){
        if(!se.contains(a[now]))se.insert(a[now]),v.push_back(a[now]);
        else break;
        now=a[now];
    }
    auto it=find(v.begin(),v.end(),a[now]);
    cout<<distance(it,v.end())<<"\n";
    for(auto i=it;i!=v.end();i++){
        if(i==it)cout<<*i+1;
        else cout<<' '<<*i+1;
    }
    cout<<endl;
    return 0;
}
