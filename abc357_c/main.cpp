#include <iostream>
#include <vector>
#include <limits.h>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
template <class T>
T POWMOD(T a, T b, T c) {
  T ans = 1;
  a %= c;
  while (b != 0)
  {
    if (b & 1)
    {
      ans *= a;
    }
    a *= a;
    b >>= 1;
    a %= c;
    ans %= c;
  }
  return ans;
}
vector<vector<char>>f(int n){
    vector<vector<char>>ret(POWMOD(3,n,INT_MAX),vector<char>(POWMOD(3,n,INT_MAX))),lower;
    if(n==0){
        ret[0][0]='#';
        return ret;
    }
    lower=f(n-1);
    for(int i=0;i<3;i++)for(int j=0;j<3;j++){
        pair<int,int>co{i*(POWMOD(3,n-1,INT_MAX)),j*POWMOD(3,n-1,INT_MAX)};
        bool already=false;
        if(i==1&&j==1){
            already=true;
            for(int k=0;k<lower.size();k++)for(int l=0;l<lower.size();l++){
                ret[co.first+k][co.second+l]='.';
            }
        }
        if(already)continue;
        for(int k=0;k<lower.size();k++)for(int l=0;l<lower.size();l++){
            ret[co.first+k][co.second+l]=lower[k][l];
        }
    }
    return ret;
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    DP(POWMOD(3,0,INT_MAX));
    vector<vector<char>>v;
    v=move(f(n));
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++)cout<<v[i][j];
        cout<<"\n";
    }
    return 0;
}
