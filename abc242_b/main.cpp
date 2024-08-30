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
    sort(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}
