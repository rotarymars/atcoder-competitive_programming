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
    vector<int>a(n),b(n);
    for(int&i:a)cin>>i;
    for(int&i:b)cin>>i;
    int acnt=0,bcnt=0;
    for(int i=0;i<n;i++)if(a[i]==b[i])acnt++;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(a[i]==b[j]&&i!=j)bcnt++;
    cout<<acnt<<"\n"<<bcnt<<endl;
    return 0;
}
