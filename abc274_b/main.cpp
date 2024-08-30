#include <iostream>
#include <string>
#include <vector>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int h,w;
    cin>>h>>w;
    vector<string>v(h);
    for(string&i:v)cin>>i;
    for(int i=0;i<w;i++){
        int ans=0;
        for(int j=0;j<h;j++){
            if(v[j][i]=='#')ans++;
        }
        if(i==0)cout<<ans;
        else cout<<' '<<ans;
    }
    cout<<endl;
    return 0;
}
