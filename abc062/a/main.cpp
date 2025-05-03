#include <iostream>
using namespace std;
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
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  DSU g(12);
  g.merge(0,2);
  g.merge(2,4);
  g.merge(4,6);
  g.merge(6,7);
  g.merge(7,9);
  g.merge(9,11);
  g.merge(3,5);
  g.merge(5,8);
  g.merge(8,10);
  int x,y;
  cin>>x>>y;
  if(g.same(x-1,y-1))cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
