#include <iostream>
#include <vector>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int h,w;
    cin>>h>>w;
    vector<vector<int>>v(h,vector<int>(w));
    for(int i=0;i<h;i++)for(int j=0;j<w;j++)cin>>v[i][j];
    for(int i=0;i<w;i++){
        for(int j=0;j<h;j++){
        if(j==0)cout<<v[j][i];
        else cout<<' '<<v[j][i];
        }
        cout<<endl;
    }
    return 0;
}
