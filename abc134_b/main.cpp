#include <iostream>
#include <template/rud.hpp>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,d;
    cin>>n>>d;
    cout<<RUD(n,2*d+1)<<endl;
    return 0;
}
