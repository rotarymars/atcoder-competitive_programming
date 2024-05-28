#include <iostream>
#include <vector>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int tmp=0;
    for(;n;n--){
        int temp;
        cin>>temp;
        tmp+=temp;
    }
    cout<<-tmp<<endl;
    return 0;
}
