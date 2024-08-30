#include <iostream>
#include <string>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i])ans++;
    }
    cout<<ans<<endl;
    return 0;
}
