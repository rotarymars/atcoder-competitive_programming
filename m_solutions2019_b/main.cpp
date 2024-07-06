#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    cout<<(count(s.begin(),s.end(),'o')+15-s.size()>=8?"YES":"NO")<<endl;
    return 0;
}
