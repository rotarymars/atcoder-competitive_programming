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
    vector<string>v(2);
    cin>>v[0]>>v[1];
    if(v[0]==".#"&&v[1]=="#.")cout<<"No"<<endl;
    else if(v[0]=="#."&&v[1]==".#")cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}
