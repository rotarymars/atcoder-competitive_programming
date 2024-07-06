#include <iostream>
#include <iomanip>
#include <math.h>
#include <utility>
#include <vector>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int longest=-1;
    vector<pair<int,int>>v(n);
    for(auto&i:v)cin>>i.first>>i.second;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++){
        longest=max(longest,(abs(v[i].first-v[j].first))*(abs(v[i].first-v[j].first))+(abs(v[i].second-v[j].second))*(abs(v[i].second-v[j].second)));
    }
    cout<<fixed<<setprecision(10)<<sqrt((long double)(longest))<<endl;;
    return 0;
}
