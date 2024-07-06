#include <iostream>
#include <regex>
#include <utility>
#include <string>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    pair<int,int>p(-1,-1);
    for(int i=0;i<8;i++){
        if(s[i]=='B'){
            if(p.first==-1)p.first=i;
            else {
                p.second=i;
                break;
            }
        }
    }
    if((p.first^p.second)&1)goto label;
    cout<<"No\n";
    return 0;
    label:
    if(regex_match(s,regex(".*R.*K.*R.*"))){
        cout<<"Yes\n";
        return 0;
    }
    cout<<"No\n";
    return 0;
}
