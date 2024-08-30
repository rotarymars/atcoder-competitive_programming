#include <iostream>
#include <vector>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    vector<vector<int>>v;
    v.push_back(vector<int>(1,1));
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        vector<int>vv;
        for(int j=0;j<=i;j++){
            if(j==0||j==i)vv.push_back(1);
            else vv.push_back(v[i-1][j-1]+v[i-1][j]);
        }
        v.push_back(vv);
    }
    for(vector<int>&i:v){
        bool first=true;
        for(int&j:i){
            if(first){
                cout<<j;
                first=false;
            }
            else cout<<' '<<j;
        }
        cout<<endl;
    }
    return 0;
}
