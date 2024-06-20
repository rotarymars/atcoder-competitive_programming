#include <iostream>
#ifndef __ROTARYMARS__RUD__
#define __ROTARYMARS__RUD__
template<class T>
T RUD(T a, T b) {
  return ((a + b - (T)1) / b);
}
#else
#endif
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int h,w,n;
    cin>>h>>w>>n;
    cout<<RUD(n,max(h,w))<<endl;
    return 0;
}
