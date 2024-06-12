#include <vector>
#include <map>
#include <numeric>
class DSU {
private:
  std::vector<int> parent;
public:
  DSU(int n) : parent(n) { std::iota(parent.begin(), parent.end(), 0); };
  int leader(int a) {
    int tmp = parent[a];
    while (tmp != parent[tmp]) {
      tmp = parent[tmp];
    }
    return tmp;
  }
  int merge(int a, int b) {
    parent[DSU::leader(a)] = parent[DSU::leader(b)] = DSU::leader(a);
    return DSU::leader(a);
  }
  void _LINK_LEADER() {
    for (int i = 0; i < parent.size(); i++) parent[i] = DSU::leader(i);
  }
  std::vector<std::vector<int>> to_vector() {
    std::map<int, int> m;
    for (int i = 0; i < parent.size(); i++) m[DSU::leader(i)] = i;
    for (auto i = m.begin(); i != m.end(); i++) i->second = distance(m.begin(), i);
    std::vector<std::vector<int>> ret(m.size());
    for (int i = 0; i < parent.size(); i++) {
      ret[m[DSU::leader(i)]].push_back(i);
    }
    return ret;
  }
  std::vector<int> parentcopy() {
    return parent;
  }
};
