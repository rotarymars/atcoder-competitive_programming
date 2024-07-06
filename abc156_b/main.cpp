#include <iostream>
#include <template/arysystem.hpp>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    cout<<CHANGEARYSYSTEM(n,k).size()<<endl;
    return 0;
}
