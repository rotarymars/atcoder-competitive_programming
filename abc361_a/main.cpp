#include <iostream>
#include <vector>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>v(n);
    for(int&i:v)cin>>i;
    v.insert(next(v.begin(),k),x);
    for(int i=0;i<n+1;i++){
        if(i==0)cout<<v[i];
        else cout<<' '<<v[i];
    }
    cout<<endl;
    return 0;
}
