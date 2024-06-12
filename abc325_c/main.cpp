#include <iostream>
#include <vector>
#include <template/dsu.hpp>
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
    int h,w;
    cin>>h>>w;
    vector<string>v(h);
    for(string&i:v)cin>>i;
    vector<int>vh{-1,-1,0,1,1,1,0,-1},vw{0,1,1,1,0,-1,-1,-1};
    DSU d(h*w);
    for(int i=0;i<h;i++)for(int j=0;j<w;j++){
        if(v[i][j]!='#')continue;
        for(int k=0;k<8;k++){
            if(0<=i+vh[k]&&h>i+vh[k]&&0<=j+vw[k]&&w>j+vw[k])if(v[i+vh[k]][j+vw[k]]=='#')d.merge(i*w+j,(i+vh[k])*w+j+vw[k]);
        }
    }
    int cnt=0;
    vector tmp=d.groups();
    for(vector<int>&i:tmp){
        if(v[i[0]/w][i[0]%w]=='#')cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
