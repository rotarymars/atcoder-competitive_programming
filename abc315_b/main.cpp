#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int&i:v)cin>>i;
    int total=accumulate(v.begin(),v.end(),0)/2+1;
    for(int i=0;i<n;i++){
        if(total<=v[i]){
            cout<<i+1<<' '<<total<<endl;
            return 0;
        }
        total-=v[i];
    }
    return 0;
}
