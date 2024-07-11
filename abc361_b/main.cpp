#include <iostream>
#include <template/debugprint.hpp>
#include <vector>
using namespace std;
bool check(int a,int b,int c,int d){
    return c<b&&a<d;
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int abc[3],def[3],ghi[3],jkl[3];
    cin>>abc[0]>>abc[1]>>abc[2]>>def[0]>>def[1]>>def[2]>>ghi[0]>>ghi[1]>>ghi[2]>>jkl[0]>>jkl[1]>>jkl[2];
    bool ok=false;
    if(ghi[0]>jkl[0])swap(ghi[0],jkl[0]);
    if(ghi[1]>jkl[1])swap(ghi[1],jkl[1]);
    if(ghi[2]>jkl[2])swap(ghi[2],jkl[2]);
    if(abc[0]>def[0])swap(abc[0],def[0]);
    if(abc[1]>def[1])swap(abc[1],def[1]);
    if(abc[2]>def[2])swap(abc[2],def[2]);
    if(check(abc[0],def[0],ghi[0],jkl[0])&&check(abc[1],def[1],ghi[1],jkl[1])&&check(abc[2],def[2],ghi[2],jkl[2]))ok=true;
    DP(abc[0]);DP(abc[1]);DP(abc[2]);DP(def[0]);DP(def[1]);DP(def[2]);DP(ghi[0]);DP(ghi[1]);DP(ghi[2]);DP(jkl[0]);DP(jkl[1]);DP(jkl[2]);
    if(ok)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
