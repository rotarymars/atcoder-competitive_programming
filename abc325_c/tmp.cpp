#include <iostream>
#include <vector>
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
    int h,w;
    cin>>h>>w;
    vector<string>v(h);
    for(string&i:v)cin>>i;
    vector<int>vh{-1,-1,0,1,1,1,0,-1},vw{0,1,1,1,0,-1,-1,-1};
    DSU d(h*w);
    for(int i=0;i<h;i++)for(int j=0;j<w;j++){
        if(v[i][j]!='#')continue;
        for(int k=0;k<8;k++){
            if(0<=i+vh[k]&&h>i+vh[k]&&0<=j+vw[k]&&w>j+vw[k])if(v[i+vh[k]][j+vw[k]]=='#')d.merge(i*w+j,(i+vh[k])*w+j+vw[k]);
        }
    }
    int cnt=0;
    vector tmp=d.groups();
    for(vector<int>&i:tmp){
        if(v[i[0]/w][i[0]%w]=='#')cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
