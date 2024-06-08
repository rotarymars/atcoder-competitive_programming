#include <iostream>
#include <queue>
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
    queue<int>que;
    int n,k;
    cin>>n>>k;
    for(;n;n--){
        int tmp;
        cin>>tmp;
        que.push(move(tmp));
    }
    for(;k;k--){
        que.pop();
        que.push(0);
    }
    n=que.size();
    for(int i=0;i<n;i++){
        cout<<(i?" ":"")<<que.front();
        que.pop();
    }
    cout<<endl;
    return 0;
}
