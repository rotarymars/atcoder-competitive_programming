#include <iostream>
#include <algorithm>
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
    vector<int>v(n);
    for(int&i:v)cin>>i;
    vector vcopy=v;
    sort(v.begin(),v.end());
    cout<<distance(vcopy.begin(),find(vcopy.begin(),vcopy.end(),*prev(v.end(),2)))+1<<endl;
    return 0;
}
