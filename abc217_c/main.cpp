#include <vector>
#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        v[tmp-1]=i+1;
    }
    for(int i=0;i<n;i++){
        if(i==0)cout<<v[i];
        else cout<<' '<<v[i];
    }
    cout<<endl;
    return 0;
}
