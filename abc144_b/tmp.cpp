#include <iostream>
#ifndef __ROTARYMARS__PRIME_FACTORIZE__
#define __ROTARYMARS__PRIME_FACTORIZE__
#include <vector>
#include <utility>
#include <algorithm>
template <class T>
std::vector<std::pair<T, T>> PRIME_FACTORIZE(T n) {
  std::vector<std::pair<T, T>> result;
  for (T i = 2; i * i <= n; i++)
  {
    if (n % i != 0)
    {
      continue;
    }
    T ex = 0;
    while (n % i == 0)
    {
      ++ex;
      n /= i;
    }
    result.push_back({ i, ex });
  }
  if (n != 1)
  {
    result.push_back({ n, 1 });
  }
  sort(result.begin(),result.end());
  return result;
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
    int n;
    cin>>n;
    bool ok=false;
    for(int i=1;i<=9;i++)for(int j=1;j<=9;j++)if(i*j==n)ok=true;
    cout<<(ok?"Yes\n":"No\n");
    return 0;
}
