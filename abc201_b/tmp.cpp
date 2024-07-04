#include <iostream>
#include <vector>
#include <string>
#include <utility>
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
    int n;
    cin>>n;
    vector<pair<string,int>>v(n);
    for(auto&i:v)cin>>i.first>>i.second;
    sort(v.begin(),v.end(),[](pair<string,int>a,pair<string,int>b){
        return a.second<b.second;
    });
    cout<<prev(v.end(),2)->first<<endl;
    return 0;
}
