#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int&i:v)cin>>i;
    sort(v.begin(),v.end());
    if(v.back()<accumulate(v.begin(),prev(v.end(),1),0))cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
