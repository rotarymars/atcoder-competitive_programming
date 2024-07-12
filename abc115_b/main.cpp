#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
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
    cout<<accumulate(v.begin(),v.end(),0)-v.back()/2<<endl;
    return 0;
}
