#include <iostream>
#ifndef __ROTARYMARS__DSU__
#define __ROTARYMARS__DSU__ 1
#include <algorithm>
#include <cassert>
#include <vector>
struct DSU
{
public:
  DSU() : _n(0) {}
  explicit DSU(int n) : _n(n), parent_or_size(n, -1) {}
  int merge(int a, int b)
  {
    int x = leader(a), y = leader(b);
    if (x == y)
      return x;
    if (-parent_or_size[x] < -parent_or_size[y])
      std::swap(x, y);
    parent_or_size[x] += parent_or_size[y];
    parent_or_size[y] = x;
    return x;
  }

  bool same(int a, int b)
  {
    return leader(a) == leader(b);
  }

  int leader(int a)
  {
    if (parent_or_size[a] < 0)
      return a;
    return parent_or_size[a] = leader(parent_or_size[a]);
  }

  int size(int a)
  {
    return -parent_or_size[leader(a)];
  }

  std::vector<std::vector<int>> groups()
  {
    std::vector<int> leader_buf(_n), group_size(_n);
    for (int i = 0; i < _n; i++)
    {
      leader_buf[i] = leader(i);
      group_size[leader_buf[i]]++;
    }
    std::vector<std::vector<int>> result(_n);
    for (int i = 0; i < _n; i++)
    {
      result[i].reserve(group_size[i]);
    }
    for (int i = 0; i < _n; i++)
    {
      result[leader_buf[i]].push_back(i);
    }
    result.erase(
        std::remove_if(result.begin(), result.end(),
                       [&](const std::vector<int> &v)
                       { return v.empty(); }),
        result.end());
    return result;
  }

private:
  int _n;
  std::vector<int> parent_or_size;
};
#else
#endif

using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  DSU dsu(n);
  int k=n;
  for(int i=0;i<m;++i){
    int u,v;
    cin>>u>>v;
    if(!dsu.same(--u,--v)){
      dsu.merge(u,v);
      --k;
    }
  }
  cout<<m-n+k<<endl;
  return 0;
}
