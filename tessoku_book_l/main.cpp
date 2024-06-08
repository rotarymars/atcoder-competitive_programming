#include <vector>
#include <iostream>
#define int long long
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
long long n,k;
vector<long long>v;
bool f(long long x){
    long long sum=0;
    for(long long&i:v)sum+=x/i;
    if(sum>=k)return true;
    else return false;
}
template<class T>
T RUD(T a, T b) {
  return ((a + b - (T)1) / b);
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cin>>n>>k;
    v.resize(n);
    for(long long&i:v)cin>>i;
    long long l=1,r=1'000'000'000;
    while(l<r){
        long long m=(l+r)/2;
        if(f(m))r=m;
        else l=m+1;
    }
    cout<<l<<endl;
    return 0;
}
