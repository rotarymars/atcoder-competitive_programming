#include <iostream>
#include <string>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s>>s;
    cout<<(s.substr(0,s.size()/2)==s.substr(s.size()/2,s.size()/2)&&!(s.size()%2)?"Yes":"No")<<endl;
    return 0;
}
