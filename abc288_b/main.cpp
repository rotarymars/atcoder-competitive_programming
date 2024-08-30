#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    vector<string>v(k);
    for(string&i:v)cin>>i;
    sort(v.begin(),v.end());
    for(string&i:v)cout<<i<<"\n";
    return 0;
}
