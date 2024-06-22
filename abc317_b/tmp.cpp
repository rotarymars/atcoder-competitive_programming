#include <iostream>
#include <numeric>
#include <vector>
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
    vector<int>v(n),ans(n+1);
    for(int&i:v)cin>>i;
    iota(ans.begin(),ans.end(),*min_element(v.begin(),v.end()));
    for(int&i:ans){
        if(find(v.begin(),v.end(),i)==v.end()){
            cout<<i<<endl;
        }
    }
    return 0;
}
